#ifndef __STC8G_H_
#define __STC8G_H_
///////////////////////////////////////////////// 
//包含本头文件后,不用另外再包含"REG51.H" 
__sfr __at (0x80) P0;
__sbit __at (0x80+0) P00;
__sbit __at (0x80+1) P01;
__sbit __at (0x80+2) P02;
__sbit __at (0x80+3) P03;
__sbit __at (0x80+4) P04;
__sbit __at (0x80+5) P05;
__sbit __at (0x80+6) P06;
__sbit __at (0x80+7) P07;
__sfr __at (0x81) SP;
__sfr __at (0x82) DPL;
__sfr __at (0x83) DPH;
__sfr __at (0x84) S4CON;
__sfr __at (0x85) S4BUF;
__sfr __at (0x87) PCON;
__sfr __at (0x88) TCON;
__sbit __at (0x88+7) TF1;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+0) IT0;
__sfr __at (0x89) TMOD;
__sfr __at (0x8A) TL0;
__sfr __at (0x8B) TL1;
__sfr __at (0x8C) TH0;
__sfr __at (0x8D) TH1;
__sfr __at (0x8E) AUXR;
__sfr __at (0x8F) INTCLKO;
__sfr __at (0x90) P1;
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+7) P17;
__sfr __at (0x91) P1M1;
__sfr __at (0x92) P1M0;
__sfr __at (0x93) P0M1;
__sfr __at (0x94) P0M0;
__sfr __at (0x95) P2M1;
__sfr __at (0x96) P2M0;
__sfr __at (0x98) SCON;
__sbit __at (0x98+7) SM0;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+0) RI;
__sfr __at (0x99) SBUF;
__sfr __at (0x9A) S2CON;
__sfr __at (0x9B) S2BUF;
__sfr __at (0x9D) IRCBAND;
__sfr __at (0x9E) LIRTRIM;
__sfr __at (0x9F) IRTRIM;
__sfr __at (0xA0) P2;
__sbit __at (0xA0+0) P20;
__sbit __at (0xA0+1) P21;
__sbit __at (0xA0+2) P22;
__sbit __at (0xA0+3) P23;
__sbit __at (0xA0+4) P24;
__sbit __at (0xA0+5) P25;
__sbit __at (0xA0+6) P26;
__sbit __at (0xA0+7) P27;
__sfr __at (0xA2) P_SW1;
__sfr __at (0xA8) IE;
__sbit __at (0xA8+7) EA;
__sbit __at (0xA8+6) ELVD;
__sbit __at (0xA8+5) EADC;
__sbit __at (0xA8+4) ES;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+0) EX0;
__sfr __at (0xA9) SADDR;
__sfr __at (0xAA) WKTCL;
__sfr __at (0xAB) WKTCH;
__sfr __at (0xAC) S3CON;
__sfr __at (0xAD) S3BUF;
__sfr __at (0xAE) TA;
__sfr __at (0xAF) IE2;
__sfr __at (0xB0) P3;
__sbit __at (0xB0+0) P30;
__sbit __at (0xB0+1) P31;
__sbit __at (0xB0+2) P32;
__sbit __at (0xB0+3) P33;
__sbit __at (0xB0+4) P34;
__sbit __at (0xB0+5) P35;
__sbit __at (0xB0+6) P36;
__sbit __at (0xB0+7) P37;
__sfr __at (0xB1) P3M1;
__sfr __at (0xB2) P3M0;
__sfr __at (0xB3) P4M1;
__sfr __at (0xB4) P4M0;
__sfr __at (0xB5) IP2;
__sfr __at (0xB6) IP2H;
__sfr __at (0xB7) IPH;
__sfr __at (0xB8) IP;
__sbit __at (0xB8+7) PPCA;
__sbit __at (0xB8+6) PLVD;
__sbit __at (0xB8+5) PADC;
__sbit __at (0xB8+4) PS;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+0) PX0;
__sfr __at (0xB9) SADEN;
__sfr __at (0xBA) P_SW2;
__sfr __at (0xBC) ADC_CONTR;
__sfr __at (0xBD) ADC_RES;
__sfr __at (0xBE) ADC_RESL;
__sfr __at (0xC0) P4;
__sbit __at (0xC0+0) P40;
__sbit __at (0xC0+1) P41;
__sbit __at (0xC0+2) P42;
__sbit __at (0xC0+3) P43;
__sbit __at (0xC0+4) P44;
__sbit __at (0xC0+5) P45;
__sbit __at (0xC0+6) P46;
__sbit __at (0xC0+7) P47;
__sfr __at (0xC1) WDT_CONTR;
__sfr __at (0xC2) IAP_DATA;
__sfr __at (0xC3) IAP_ADDRH;
__sfr __at (0xC4) IAP_ADDRL;
__sfr __at (0xC5) IAP_CMD;
__sfr __at (0xC6) IAP_TRIG;
__sfr __at (0xC7) IAP_CONTR;
__sfr __at (0xC8) P5;
__sbit __at (0xC8+0) P50;
__sbit __at (0xC8+1) P51;
__sbit __at (0xC8+2) P52;
__sbit __at (0xC8+3) P53;
__sbit __at (0xC8+4) P54;
__sbit __at (0xC8+5) P55;
__sbit __at (0xC8+6) P56;
__sbit __at (0xC8+7) P57;
__sfr __at (0xC9) P5M1;
__sfr __at (0xCA) P5M0;
__sfr __at (0xCD) SPSTAT;
__sfr __at (0xCE) SPCTL;
__sfr __at (0xCF) SPDAT;
__sfr __at (0xD0) PSW;
__sbit __at (0xD0+7) CY;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+0) P;
__sfr __at (0xD1) T4T3M;
__sfr __at (0xD2) T4H;
__sfr __at (0xD3) T4L;
__sfr __at (0xD4) T3H;
__sfr __at (0xD5) T3L;
__sfr __at (0xD6) T2H;
__sfr __at (0xD7) T2L;
__sfr __at (0xD8) CCON;
__sbit __at (0xD8+7) CF;
__sbit __at (0xD8+6) CR;
__sbit __at (0xD8+2) CCF2;
__sbit __at (0xD8+1) CCF1;
__sbit __at (0xD8+0) CCF0;
__sfr __at (0xD9) CMOD;
__sfr __at (0xDA) CCAPM0;
__sfr __at (0xDB) CCAPM1;
__sfr __at (0xDC) CCAPM2;
__sfr __at (0xDE) ADCCFG;
__sfr __at (0xDF) IP3;
__sfr __at (0xE0) ACC;
__sfr __at (0xE3) DPS;
__sfr __at (0xE4) DPL1;
__sfr __at (0xE5) DPH1;
__sfr __at (0xE6) CMPCR1;
__sfr __at (0xE7) CMPCR2;
__sfr __at (0xE9) CL;
__sfr __at (0xEA) CCAP0L;
__sfr __at (0xEB) CCAP1L;
__sfr __at (0xEC) CCAP2L;
__sfr __at (0xEE) IP3H;
__sfr __at (0xEF) AUXINTIF;
__sfr __at (0xF0) B;
__sfr __at (0xF1) PWMSET;
__sfr __at (0xF2) PCA_PWM0;
__sfr __at (0xF3) PCA_PWM1;
__sfr __at (0xF4) PCA_PWM2;
__sfr __at (0xF5) IAP_TPS;
__sfr __at (0xF6) PWMCFG01;
__sfr __at (0xF7) PWMCFG23;
__sfr __at (0xF9) CH;
__sfr __at (0xFA) CCAP0H;
__sfr __at (0xFB) CCAP1H;
__sfr __at (0xFC) CCAP2H;
__sfr __at (0xFE) PWMCFG45;
__sfr __at (0xFF) RSTCFG;
//如下特殊功能寄存器位于扩展 RAM 区域
//访问这些寄存器,需先将 P_SW2 的 BIT7 设置为 1,才可正常读写
#define CKSEL (*(unsigned char volatile __xdata *)0xFE00)
#define CLKDIV (*(unsigned char volatile __xdata *)0xFE01)
#define HIRCCR (*(unsigned char volatile __xdata *)0xFE02)
#define XOSCCR (*(unsigned char volatile __xdata *)0xFE03)
#define IRC32KCR (*(unsigned char volatile __xdata *)0xFE04)
#define MCLKOCR (*(unsigned char volatile __xdata *)0xFE05)
#define IRCDB (*(unsigned char volatile __xdata *)0xFE06)
#define P0PU (*(unsigned char volatile __xdata *)0xFE10)
#define P1PU (*(unsigned char volatile __xdata *)0xFE11)
#define P2PU (*(unsigned char volatile __xdata *)0xFE12)
#define P3PU (*(unsigned char volatile __xdata *)0xFE13)
#define P4PU (*(unsigned char volatile __xdata *)0xFE14)
#define P5PU (*(unsigned char volatile __xdata *)0xFE15)
#define P0NCS (*(unsigned char volatile __xdata *)0xFE18)
#define P1NCS (*(unsigned char volatile __xdata *)0xFE19)
#define P2NCS (*(unsigned char volatile __xdata *)0xFE1A)
#define P3NCS (*(unsigned char volatile __xdata *)0xFE1B)
#define P4NCS (*(unsigned char volatile __xdata *)0xFE1C)
#define P5NCS (*(unsigned char volatile __xdata *)0xFE1D)
#define P0SR (*(unsigned char volatile __xdata *)0xFE20)
#define P1SR (*(unsigned char volatile __xdata *)0xFE21)
#define P2SR (*(unsigned char volatile __xdata *)0xFE22)
#define P3SR (*(unsigned char volatile __xdata *)0xFE23)
#define P4SR (*(unsigned char volatile __xdata *)0xFE24)
#define P5SR (*(unsigned char volatile __xdata *)0xFE25)
#define P0DR (*(unsigned char volatile __xdata *)0xFE28)
#define P1DR (*(unsigned char volatile __xdata *)0xFE29)
#define P2DR (*(unsigned char volatile __xdata *)0xFE2A)
#define P3DR (*(unsigned char volatile __xdata *)0xFE2B)
#define P4DR (*(unsigned char volatile __xdata *)0xFE2C)
#define P5DR (*(unsigned char volatile __xdata *)0xFE2D)
#define P0IE (*(unsigned char volatile __xdata *)0xFE30)
#define P1IE (*(unsigned char volatile __xdata *)0xFE31)
#define P3IE (*(unsigned char volatile __xdata *)0xFE33)
#define I2CCFG (*(unsigned char volatile __xdata *)0xFE80)
#define I2CMSCR (*(unsigned char volatile __xdata *)0xFE81)
#define I2CMSST (*(unsigned char volatile __xdata *)0xFE82)
#define I2CSLCR (*(unsigned char volatile __xdata *)0xFE83)
#define I2CSLST (*(unsigned char volatile __xdata *)0xFE84)
#define I2CSLADR (*(unsigned char volatile __xdata *)0xFE85)
#define I2CTXD (*(unsigned char volatile __xdata *)0xFE86)
#define I2CRXD (*(unsigned char volatile __xdata *)0xFE87)
#define I2CMSAUX (*(unsigned char volatile __xdata *)0xFE88)
#define TM2PS (*(unsigned char volatile __xdata *)0xFEA2)
#define TM3PS (*(unsigned char volatile __xdata *)0xFEA3)
#define TM4PS (*(unsigned char volatile __xdata *)0xFEA4)
#define ADCTIM (*(unsigned char volatile __xdata *)0xFEA8)
#define PWM0CH (*(unsigned char volatile __xdata *)0xFF00)
#define PWM0CL (*(unsigned char volatile __xdata *)0xFF01)
#define PWM0CKS (*(unsigned char volatile __xdata *)0xFF02)
#define PWM0TADCH (*(unsigned char volatile __xdata *)0xFF03)
#define PWM0TADCL (*(unsigned char volatile __xdata *)0xFF04)
#define PWM0IF (*(unsigned char volatile __xdata *)0xFF05)
#define PWM0FDCR (*(unsigned char volatile __xdata *)0xFF06)
#define PWM00T1H (*(unsigned char volatile __xdata *)0xFF10)
#define PWM00T1L (*(unsigned char volatile __xdata *)0xFF11)
#define PWM00T2H (*(unsigned char volatile __xdata *)0xFF12)
#define PWM00T2L (*(unsigned char volatile __xdata *)0xFF13)
#define PWM00CR (*(unsigned char volatile __xdata *)0xFF14)
#define PWM00HLD (*(unsigned char volatile __xdata *)0xFF15)
#define PWM01T1H (*(unsigned char volatile __xdata *)0xFF18)
#define PWM01T1L (*(unsigned char volatile __xdata *)0xFF19)
#define PWM01T2H (*(unsigned char volatile __xdata *)0xFF1A)
#define PWM01T2L (*(unsigned char volatile __xdata *)0xFF1B)
#define PWM01CR (*(unsigned char volatile __xdata *)0xFF1C)
#define PWM01HLD (*(unsigned char volatile __xdata *)0xFF1D)
#define PWM02T1H (*(unsigned char volatile __xdata *)0xFF20)
#define PWM02T1L (*(unsigned char volatile __xdata *)0xFF21)
#define PWM02T2H (*(unsigned char volatile __xdata *)0xFF22)
#define PWM02T2L (*(unsigned char volatile __xdata *)0xFF23)
#define PWM02CR (*(unsigned char volatile __xdata *)0xFF24)
#define PWM02HLD (*(unsigned char volatile __xdata *)0xFF25)
#define PWM03T1H (*(unsigned char volatile __xdata *)0xFF28)
#define PWM03T1L (*(unsigned char volatile __xdata *)0xFF29)
#define PWM03T2H (*(unsigned char volatile __xdata *)0xFF2A)
#define PWM03T2L (*(unsigned char volatile __xdata *)0xFF2B)
#define PWM03CR (*(unsigned char volatile __xdata *)0xFF2C)
#define PWM03HLD (*(unsigned char volatile __xdata *)0xFF2D)
#define PWM04T1H (*(unsigned char volatile __xdata *)0xFF30)
#define PWM04T1L (*(unsigned char volatile __xdata *)0xFF31)
#define PWM04T2H (*(unsigned char volatile __xdata *)0xFF32)
#define PWM04T2L (*(unsigned char volatile __xdata *)0xFF33)
#define PWM04CR (*(unsigned char volatile __xdata *)0xFF34)
#define PWM04HLD (*(unsigned char volatile __xdata *)0xFF35)
#define PWM05T1H (*(unsigned char volatile __xdata *)0xFF38)
#define PWM05T1L (*(unsigned char volatile __xdata *)0xFF39)
#define PWM05T2H (*(unsigned char volatile __xdata *)0xFF3A)
#define PWM05T2L (*(unsigned char volatile __xdata *)0xFF3B)
#define PWM05CR (*(unsigned char volatile __xdata *)0xFF3C)
#define PWM05HLD (*(unsigned char volatile __xdata *)0xFF3D)
#define PWM06T1H (*(unsigned char volatile __xdata *)0xFF40)
#define PWM06T1L (*(unsigned char volatile __xdata *)0xFF41)
#define PWM06T2H (*(unsigned char volatile __xdata *)0xFF42)
#define PWM06T2L (*(unsigned char volatile __xdata *)0xFF43)
#define PWM06CR (*(unsigned char volatile __xdata *)0xFF44)
#define PWM06HLD (*(unsigned char volatile __xdata *)0xFF45)
#define PWM07T1H (*(unsigned char volatile __xdata *)0xFF48)
#define PWM07T1L (*(unsigned char volatile __xdata *)0xFF49)
#define PWM07T2H (*(unsigned char volatile __xdata *)0xFF4A)
#define PWM07T2L (*(unsigned char volatile __xdata *)0xFF4B)
#define PWM07CR (*(unsigned char volatile __xdata *)0xFF4C)
#define PWM07HLD (*(unsigned char volatile __xdata *)0xFF4D)
#define PWM1CH (*(unsigned char volatile __xdata *)0xFF50)
#define PWM1CL (*(unsigned char volatile __xdata *)0xFF51)
#define PWM1CKS (*(unsigned char volatile __xdata *)0xFF52)
#define PWM1IF (*(unsigned char volatile __xdata *)0xFF55)
#define PWM1FDCR (*(unsigned char volatile __xdata *)0xFF56)
#define PWM10T1H (*(unsigned char volatile __xdata *)0xFF60)
#define PWM10T1L (*(unsigned char volatile __xdata *)0xFF61)
#define PWM10T2H (*(unsigned char volatile __xdata *)0xFF62)
#define PWM10T2L (*(unsigned char volatile __xdata *)0xFF63)
#define PWM10CR (*(unsigned char volatile __xdata *)0xFF64)
#define PWM10HLD (*(unsigned char volatile __xdata *)0xFF65)
#define PWM11T1H (*(unsigned char volatile __xdata *)0xFF68)
#define PWM11T1L (*(unsigned char volatile __xdata *)0xFF69)
#define PWM11T2H (*(unsigned char volatile __xdata *)0xFF6A)
#define PWM11T2L (*(unsigned char volatile __xdata *)0xFF6B)
#define PWM11CR (*(unsigned char volatile __xdata *)0xFF6C)
#define PWM11HLD (*(unsigned char volatile __xdata *)0xFF6D)
#define PWM12T1H (*(unsigned char volatile __xdata *)0xFF70)
#define PWM12T1L (*(unsigned char volatile __xdata *)0xFF71)
#define PWM12T2H (*(unsigned char volatile __xdata *)0xFF72)
#define PWM12T2L (*(unsigned char volatile __xdata *)0xFF73)
#define PWM12CR (*(unsigned char volatile __xdata *)0xFF74)
#define PWM12HLD (*(unsigned char volatile __xdata *)0xFF75)
#define PWM13T1H (*(unsigned char volatile __xdata *)0xFF78)
#define PWM13T1L (*(unsigned char volatile __xdata *)0xFF79)
#define PWM13T2H (*(unsigned char volatile __xdata *)0xFF7A)
#define PWM13T2L (*(unsigned char volatile __xdata *)0xFF7B)
#define PWM13CR (*(unsigned char volatile __xdata *)0xFF7C)
#define PWM13HLD (*(unsigned char volatile __xdata *)0xFF7D)
#define PWM14T1H (*(unsigned char volatile __xdata *)0xFF80)
#define PWM14T1L (*(unsigned char volatile __xdata *)0xFF81)
#define PWM14T2H (*(unsigned char volatile __xdata *)0xFF82)
#define PWM14T2L (*(unsigned char volatile __xdata *)0xFF83)
#define PWM14CR (*(unsigned char volatile __xdata *)0xFF84)
#define PWM14HLD (*(unsigned char volatile __xdata *)0xFF85)
#define PWM15T1H (*(unsigned char volatile __xdata *)0xFF88)
#define PWM15T1L (*(unsigned char volatile __xdata *)0xFF89)
#define PWM15T2H (*(unsigned char volatile __xdata *)0xFF8A)
#define PWM15T2L (*(unsigned char volatile __xdata *)0xFF8B)
#define PWM15CR (*(unsigned char volatile __xdata *)0xFF8C)
#define PWM15HLD (*(unsigned char volatile __xdata *)0xFF8D)
#define PWM16T1H (*(unsigned char volatile __xdata *)0xFF90)
#define PWM16T1L (*(unsigned char volatile __xdata *)0xFF91)
#define PWM16T2H (*(unsigned char volatile __xdata *)0xFF92)
#define PWM16T2L (*(unsigned char volatile __xdata *)0xFF93)
#define PWM16CR (*(unsigned char volatile __xdata *)0xFF94)
#define PWM16HLD (*(unsigned char volatile __xdata *)0xFF95)
#define PWM17T1H (*(unsigned char volatile __xdata *)0xFF98)
#define PWM17T1L (*(unsigned char volatile __xdata *)0xFF99)
#define PWM17T2H (*(unsigned char volatile __xdata *)0xFF9A)
#define PWM17T2L (*(unsigned char volatile __xdata *)0xFF9B)
#define PWM17CR (*(unsigned char volatile __xdata *)0xFF9C)
#define PWM17HLD (*(unsigned char volatile __xdata *)0xFF9D)
#define PWM2CH (*(unsigned char volatile __xdata *)0xFFA0)
#define PWM2CL (*(unsigned char volatile __xdata *)0xFFA1)
#define PWM2CKS (*(unsigned char volatile __xdata *)0xFFA2)
#define PWM2TADCH (*(unsigned char volatile __xdata *)0xFFA3)
#define PWM2TADCL (*(unsigned char volatile __xdata *)0xFFA4)
#define PWM2IF (*(unsigned char volatile __xdata *)0xFFA5)
#define PWM2FDCR (*(unsigned char volatile __xdata *)0xFFA6)
#define PWM20T1H (*(unsigned char volatile __xdata *)0xFFB0)
#define PWM20T1L (*(unsigned char volatile __xdata *)0xFFB1)
#define PWM20T2H (*(unsigned char volatile __xdata *)0xFFB2)
#define PWM20T2L (*(unsigned char volatile __xdata *)0xFFB3)
#define PWM20CR (*(unsigned char volatile __xdata *)0xFFB4)
#define PWM20HLD (*(unsigned char volatile __xdata *)0xFFB5)
#define PWM21T1H (*(unsigned char volatile __xdata *)0xFFB8)
#define PWM21T1L (*(unsigned char volatile __xdata *)0xFFB9)
#define PWM21T2H (*(unsigned char volatile __xdata *)0xFFBA)
#define PWM21T2L (*(unsigned char volatile __xdata *)0xFFBB)
#define PWM21CR (*(unsigned char volatile __xdata *)0xFFBC)
#define PWM21HLD (*(unsigned char volatile __xdata *)0xFFBD)
#define PWM22T1H (*(unsigned char volatile __xdata *)0xFFC0)
#define PWM22T1L (*(unsigned char volatile __xdata *)0xFFC1)
#define PWM22T2H (*(unsigned char volatile __xdata *)0xFFC2)
#define PWM22T2L (*(unsigned char volatile __xdata *)0xFFC3)
#define PWM22CR (*(unsigned char volatile __xdata *)0xFFC4)
#define PWM22HLD (*(unsigned char volatile __xdata *)0xFFC5)
#define PWM23T1H (*(unsigned char volatile __xdata *)0xFFC8)
#define PWM23T1L (*(unsigned char volatile __xdata *)0xFFC9)
#define PWM23T2H (*(unsigned char volatile __xdata *)0xFFCA)
#define PWM23T2L (*(unsigned char volatile __xdata *)0xFFCB)
#define PWM23CR (*(unsigned char volatile __xdata *)0xFFCC)
#define PWM23HLD (*(unsigned char volatile __xdata *)0xFFCD)
#define PWM24T1H (*(unsigned char volatile __xdata *)0xFFD0)
#define PWM24T1L (*(unsigned char volatile __xdata *)0xFFD1)
#define PWM24T2H (*(unsigned char volatile __xdata *)0xFFD2)
#define PWM24T2L (*(unsigned char volatile __xdata *)0xFFD3)
#define PWM24CR (*(unsigned char volatile __xdata *)0xFFD4)
#define PWM24HLD (*(unsigned char volatile __xdata *)0xFFD5)
#define PWM25T1H (*(unsigned char volatile __xdata *)0xFFD8)
#define PWM25T1L (*(unsigned char volatile __xdata *)0xFFD9)
#define PWM25T2H (*(unsigned char volatile __xdata *)0xFFDA)
#define PWM25T2L (*(unsigned char volatile __xdata *)0xFFDB)
#define PWM25CR (*(unsigned char volatile __xdata *)0xFFDC)
#define PWM25HLD (*(unsigned char volatile __xdata *)0xFFDD)
#define PWM26T1H (*(unsigned char volatile __xdata *)0xFFE0)
#define PWM26T1L (*(unsigned char volatile __xdata *)0xFFE1)
#define PWM26T2H (*(unsigned char volatile __xdata *)0xFFE2)
#define PWM26T2L (*(unsigned char volatile __xdata *)0xFFE3)
#define PWM26CR (*(unsigned char volatile __xdata *)0xFFE4)
#define PWM26HLD (*(unsigned char volatile __xdata *)0xFFE5)
#define PWM27T1H (*(unsigned char volatile __xdata *)0xFFE8)
#define PWM27T1L (*(unsigned char volatile __xdata *)0xFFE9)
#define PWM27T2H (*(unsigned char volatile __xdata *)0xFFEA)
#define PWM27T2L (*(unsigned char volatile __xdata *)0xFFEB)
#define PWM27CR (*(unsigned char volatile __xdata *)0xFFEC)
#define PWM27HLD (*(unsigned char volatile __xdata *)0xFFED)
#define PWM3CH (*(unsigned char volatile __xdata *)0xFC00)
#define PWM3CL (*(unsigned char volatile __xdata *)0xFC01)
#define PWM3CKS (*(unsigned char volatile __xdata *)0xFC02)
#define PWM3IF (*(unsigned char volatile __xdata *)0xFC05)
#define PWM3FDCR (*(unsigned char volatile __xdata *)0xFC06)
#define PWM30T1H (*(unsigned char volatile __xdata *)0xFC10)
#define PWM30T1L (*(unsigned char volatile __xdata *)0xFC11)
#define PWM30T2H (*(unsigned char volatile __xdata *)0xFC12)
#define PWM30T2L (*(unsigned char volatile __xdata *)0xFC13)
#define PWM30CR (*(unsigned char volatile __xdata *)0xFC14)
#define PWM30HLD (*(unsigned char volatile __xdata *)0xFC15)
#define PWM31T1H (*(unsigned char volatile __xdata *)0xFC18)
#define PWM31T1L (*(unsigned char volatile __xdata *)0xFC19)
#define PWM31T2H (*(unsigned char volatile __xdata *)0xFC1A)
#define PWM31T2L (*(unsigned char volatile __xdata *)0xFC1B)
#define PWM31CR (*(unsigned char volatile __xdata *)0xFC1C)
#define PWM31HLD (*(unsigned char volatile __xdata *)0xFC1D)
#define PWM32T1H (*(unsigned char volatile __xdata *)0xFC20)
#define PWM32T1L (*(unsigned char volatile __xdata *)0xFC21)
#define PWM32T2H (*(unsigned char volatile __xdata *)0xFC22)
#define PWM32T2L (*(unsigned char volatile __xdata *)0xFC23)
#define PWM32CR (*(unsigned char volatile __xdata *)0xFC24)
#define PWM32HLD (*(unsigned char volatile __xdata *)0xFC25)
#define PWM33T1H (*(unsigned char volatile __xdata *)0xFC28)
#define PWM33T1L (*(unsigned char volatile __xdata *)0xFC29)
#define PWM33T2H (*(unsigned char volatile __xdata *)0xFC2A)
#define PWM33T2L (*(unsigned char volatile __xdata *)0xFC2B)
#define PWM33CR (*(unsigned char volatile __xdata *)0xFC2C)
#define PWM33HLD (*(unsigned char volatile __xdata *)0xFC2D)
#define PWM34T1H (*(unsigned char volatile __xdata *)0xFC30)
#define PWM34T1L (*(unsigned char volatile __xdata *)0xFC31)
#define PWM34T2H (*(unsigned char volatile __xdata *)0xFC32)
#define PWM34T2L (*(unsigned char volatile __xdata *)0xFC33)
#define PWM34CR (*(unsigned char volatile __xdata *)0xFC34)
#define PWM34HLD (*(unsigned char volatile __xdata *)0xFC35)
#define PWM35T1H (*(unsigned char volatile __xdata *)0xFC38)
#define PWM35T1L (*(unsigned char volatile __xdata *)0xFC39)
#define PWM35T2H (*(unsigned char volatile __xdata *)0xFC3A)
#define PWM35T2L (*(unsigned char volatile __xdata *)0xFC3B)
#define PWM35CR (*(unsigned char volatile __xdata *)0xFC3C)
#define PWM35HLD (*(unsigned char volatile __xdata *)0xFC3D)
#define PWM36T1H (*(unsigned char volatile __xdata *)0xFC40)
#define PWM36T1L (*(unsigned char volatile __xdata *)0xFC41)
#define PWM36T2H (*(unsigned char volatile __xdata *)0xFC42)
#define PWM36T2L (*(unsigned char volatile __xdata *)0xFC43)
#define PWM36CR (*(unsigned char volatile __xdata *)0xFC44)
#define PWM36HLD (*(unsigned char volatile __xdata *)0xFC45)
#define PWM37T1H (*(unsigned char volatile __xdata *)0xFC48)
#define PWM37T1L (*(unsigned char volatile __xdata *)0xFC49)
#define PWM37T2H (*(unsigned char volatile __xdata *)0xFC4A)
#define PWM37T2L (*(unsigned char volatile __xdata *)0xFC4B)
#define PWM37CR (*(unsigned char volatile __xdata *)0xFC4C)
#define PWM37HLD (*(unsigned char volatile __xdata *)0xFC4D)
#define PWM4CH (*(unsigned char volatile __xdata *)0xFC50)
#define PWM4CL (*(unsigned char volatile __xdata *)0xFC51)
#define PWM4CKS (*(unsigned char volatile __xdata *)0xFC52)
#define PWM4TADCH (*(unsigned char volatile __xdata *)0xFC53)
#define PWM4TADCL (*(unsigned char volatile __xdata *)0xFC54)
#define PWM4IF (*(unsigned char volatile __xdata *)0xFC55)
#define PWM4FDCR (*(unsigned char volatile __xdata *)0xFC56)
#define PWM40T1H (*(unsigned char volatile __xdata *)0xFC60)
#define PWM40T1L (*(unsigned char volatile __xdata *)0xFC61)
#define PWM40T2H (*(unsigned char volatile __xdata *)0xFC62)
#define PWM40T2L (*(unsigned char volatile __xdata *)0xFC63)
#define PWM40CR (*(unsigned char volatile __xdata *)0xFC64)
#define PWM40HLD (*(unsigned char volatile __xdata *)0xFC65)
#define PWM41T1H (*(unsigned char volatile __xdata *)0xFC68)
#define PWM41T1L (*(unsigned char volatile __xdata *)0xFC69)
#define PWM41T2H (*(unsigned char volatile __xdata *)0xFC6A)
#define PWM41T2L (*(unsigned char volatile __xdata *)0xFC6B)
#define PWM41CR (*(unsigned char volatile __xdata *)0xFC6C)
#define PWM41HLD (*(unsigned char volatile __xdata *)0xFC6D)
#define PWM42T1H (*(unsigned char volatile __xdata *)0xFC70)
#define PWM42T1L (*(unsigned char volatile __xdata *)0xFC71)
#define PWM42T2H (*(unsigned char volatile __xdata *)0xFC72)
#define PWM42T2L (*(unsigned char volatile __xdata *)0xFC73)
#define PWM42CR (*(unsigned char volatile __xdata *)0xFC74)
#define PWM42HLD (*(unsigned char volatile __xdata *)0xFC75)
#define PWM43T1H (*(unsigned char volatile __xdata *)0xFC78)
#define PWM43T1L (*(unsigned char volatile __xdata *)0xFC79)
#define PWM43T2H (*(unsigned char volatile __xdata *)0xFC7A)
#define PWM43T2L (*(unsigned char volatile __xdata *)0xFC7B)
#define PWM43CR (*(unsigned char volatile __xdata *)0xFC7C)
#define PWM43HLD (*(unsigned char volatile __xdata *)0xFC7D)
#define PWM44T1H (*(unsigned char volatile __xdata *)0xFC80)
#define PWM44T1L (*(unsigned char volatile __xdata *)0xFC81)
#define PWM44T2H (*(unsigned char volatile __xdata *)0xFC82)
#define PWM44T2L (*(unsigned char volatile __xdata *)0xFC83)
#define PWM44CR (*(unsigned char volatile __xdata *)0xFC84)
#define PWM44HLD (*(unsigned char volatile __xdata *)0xFC85)
#define PWM45T1H (*(unsigned char volatile __xdata *)0xFC88)
#define PWM45T1L (*(unsigned char volatile __xdata *)0xFC89)
#define PWM45T2H (*(unsigned char volatile __xdata *)0xFC8A)
#define PWM45T2L (*(unsigned char volatile __xdata *)0xFC8B)
#define PWM45CR (*(unsigned char volatile __xdata *)0xFC8C)
#define PWM45HLD (*(unsigned char volatile __xdata *)0xFC8D)
#define PWM46T1H (*(unsigned char volatile __xdata *)0xFC90)
#define PWM46T1L (*(unsigned char volatile __xdata *)0xFC91)
#define PWM46T2H (*(unsigned char volatile __xdata *)0xFC92)
#define PWM46T2L (*(unsigned char volatile __xdata *)0xFC93)
#define PWM46CR (*(unsigned char volatile __xdata *)0xFC94)
#define PWM46HLD (*(unsigned char volatile __xdata *)0xFC95)
#define PWM47T1H (*(unsigned char volatile __xdata *)0xFC98)
#define PWM47T1L (*(unsigned char volatile __xdata *)0xFC99)
#define PWM47T2H (*(unsigned char volatile __xdata *)0xFC9A)
#define PWM47T2L (*(unsigned char volatile __xdata *)0xFC9B)
#define PWM47CR (*(unsigned char volatile __xdata *)0xFC9C)
#define PWM47HLD (*(unsigned char volatile __xdata *)0xFC9D)
#define PWM5CH (*(unsigned char volatile __xdata *)0xFCA0)
#define PWM5CL (*(unsigned char volatile __xdata *)0xFCA1)
#define PWM5CKS (*(unsigned char volatile __xdata *)0xFCA2)
#define PWM5IF (*(unsigned char volatile __xdata *)0xFCA5)
#define PWM5FDCR (*(unsigned char volatile __xdata *)0xFCA6)
#define PWM50T1H (*(unsigned char volatile __xdata *)0xFCB0)
#define PWM50T1L (*(unsigned char volatile __xdata *)0xFCB1)
#define PWM50T2H (*(unsigned char volatile __xdata *)0xFCB2)
#define PWM50T2L (*(unsigned char volatile __xdata *)0xFCB3)
#define PWM50CR (*(unsigned char volatile __xdata *)0xFCB4)
#define PWM50HLD (*(unsigned char volatile __xdata *)0xFCB5)
#define PWM51T1H (*(unsigned char volatile __xdata *)0xFCB8)
#define PWM51T1L (*(unsigned char volatile __xdata *)0xFCB9)
#define PWM51T2H (*(unsigned char volatile __xdata *)0xFCBA)
#define PWM51T2L (*(unsigned char volatile __xdata *)0xFCBB)
#define PWM51CR (*(unsigned char volatile __xdata *)0xFCBC)
#define PWM51HLD (*(unsigned char volatile __xdata *)0xFCBD)
#define PWM52T1H (*(unsigned char volatile __xdata *)0xFCC0)
#define PWM52T1L (*(unsigned char volatile __xdata *)0xFCC1)
#define PWM52T2H (*(unsigned char volatile __xdata *)0xFCC2)
#define PWM52T2L (*(unsigned char volatile __xdata *)0xFCC3)
#define PWM52CR (*(unsigned char volatile __xdata *)0xFCC4)
#define PWM52HLD (*(unsigned char volatile __xdata *)0xFCC5)
#define PWM53T1H (*(unsigned char volatile __xdata *)0xFCC8)
#define PWM53T1L (*(unsigned char volatile __xdata *)0xFCC9)
#define PWM53T2H (*(unsigned char volatile __xdata *)0xFCCA)
#define PWM53T2L (*(unsigned char volatile __xdata *)0xFCCB)
#define PWM53CR (*(unsigned char volatile __xdata *)0xFCCC)
#define PWM53HLD (*(unsigned char volatile __xdata *)0xFCCD)
#define PWM54T1H (*(unsigned char volatile __xdata *)0xFCD0)
#define PWM54T1L (*(unsigned char volatile __xdata *)0xFCD1)
#define PWM54T2H (*(unsigned char volatile __xdata *)0xFCD2)
#define PWM54T2L (*(unsigned char volatile __xdata *)0xFCD3)
#define PWM54CR (*(unsigned char volatile __xdata *)0xFCD4)
#define PWM54HLD (*(unsigned char volatile __xdata *)0xFCD5)
#define PWM55T1H (*(unsigned char volatile __xdata *)0xFCD8)
#define PWM55T1L (*(unsigned char volatile __xdata *)0xFCD9)
#define PWM55T2H (*(unsigned char volatile __xdata *)0xFCDA)
#define PWM55T2L (*(unsigned char volatile __xdata *)0xFCDB)
#define PWM55CR (*(unsigned char volatile __xdata *)0xFCDC)
#define PWM55HLD (*(unsigned char volatile __xdata *)0xFCDD)
#define PWM56T1H (*(unsigned char volatile __xdata *)0xFCE0)
#define PWM56T1L (*(unsigned char volatile __xdata *)0xFCE1)
#define PWM56T2H (*(unsigned char volatile __xdata *)0xFCE2)
#define PWM56T2L (*(unsigned char volatile __xdata *)0xFCE3)
#define PWM56CR (*(unsigned char volatile __xdata *)0xFCE4)
#define PWM56HLD (*(unsigned char volatile __xdata *)0xFCE5)
#define PWM57T1H (*(unsigned char volatile __xdata *)0xFCE8)
#define PWM57T1L (*(unsigned char volatile __xdata *)0xFCE9)
#define PWM57T2H (*(unsigned char volatile __xdata *)0xFCEA)
#define PWM57T2L (*(unsigned char volatile __xdata *)0xFCEB)
#define PWM57CR (*(unsigned char volatile __xdata *)0xFCEC)
#define PWM57HLD (*(unsigned char volatile __xdata *)0xFCED)
///////////////////////////////////////////////// 
#endif
