#include <stc8g.sdcc.h>

#define ledGreen P33
#define ledRed P32
#define ledYellow P54

/**
 * 利用定时器0实现红绿灯闪烁
 * 定时器溢出一次是50ms
 * 1、绿灯亮4s，需要4*50ms*20（第一次点亮，第80次定时器中断灭）
 * 2、绿灯灭500ms，需要50ms*10（81-90次中断不操作）
 * 3、绿灯闪烁3s，每次亮500ms，灭500ms，每次50ms*10（91/111/131次中断亮，100/120/140次中断灭）
 * 4、黄灯亮2s，需要2*50ms*20 (141次中断亮，180次中断灭)
 * 5、红灯亮4s，需要4*50ms*20 (181次中断亮，260次中断灭)
 * 6、红灯灭500ms，需要50ms*10（261-270次中断不操作）
 * 7、红灯闪烁3s，每次亮500ms，灭500ms，每次50ms*10 (271/291/311次中断亮，280/300/320次中断灭)
 */

// 定时器0中断次数变量
unsigned short Timer0_Count = 0;

void main(void)
{
  // 设置P33/P32为推挽输出
  P3M1 = 0x00; // 0000 0000
  P3M0 = 0x0C; // 0000 1100
  // 设置P54为推挽输出
  P5M1 = 0x00; // 0000 0000
  P5M0 = 0x10; // 0001 0000
  // 初始化
  ledGreen = 0;
  ledRed = 0;
  ledYellow = 0;
  // 定时器TO 初始化
  TMOD = 0x01; // 定时器1为16位自动重装载定时器
  TL0 = 0xB0;  // 初始化定时器0的计数值 (2^16 - 50ms * 1000us) % 2^8 = 176 = 0xB0
  TH0 = 0x3C;  // 初始化定时器0的计数值 (2^16 - 50ms * 1000us) / 2^8 = 60 = 0x3C
  EA = 1;      // 打开总中断
  ET0 = 1;     // 打开定时器0中断
  TR0 = 1;     // 启动定时器0

  while (1)
    ;
}

// 定时器0中断服务程序
void timer0() __interrupt 1
{

  Timer0_Count++;

  TR0 = 0; // 关闭定时器0
  // 定时器0的计数值初始化
  TL0 = 0xB0;
  TH0 = 0x3C;
  // // 定时器0中断标志清零
  // TF0 = 0;
  TR0 = 1; // 启动定时器0

  // 处理绿灯
  if (Timer0_Count == 1 || Timer0_Count == 91 || Timer0_Count == 111 || Timer0_Count == 131)
  {
    ledGreen = 1;
  }
  else if (Timer0_Count == 80 || Timer0_Count == 100 || Timer0_Count == 120 || Timer0_Count == 140)
  {
    ledGreen = 0;
  }
  // 处理黄灯
  if (Timer0_Count == 141)
  {
    ledYellow = 1;
  }
  else if (Timer0_Count == 180)
  {
    ledYellow = 0;
  }
  // 处理红灯
  if (Timer0_Count == 181 || Timer0_Count == 271 || Timer0_Count == 291 || Timer0_Count == 311)
  {
    ledRed = 1;
  }
  else if (Timer0_Count == 260 || Timer0_Count == 280 || Timer0_Count == 300 || Timer0_Count == 320)
  {
    ledRed = 0;
  }
  if (Timer0_Count >= 320)
  {
    Timer0_Count = 0;
  }
  // 定时器0中断服务程序结束
}