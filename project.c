/*****************************************************
This program was produced by the
CodeWizardAVR V2.04.4a Advanced
Automatic Program Generator
© Copyright 1998-2009 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : Sample
Version : 0.1
Date    : 5/30/2019
Company : None
Comments: None

Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 40.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/
#include <mega32.h>
#include <delay.h>

unsigned char i;
unsigned char des[16] = {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x61,0x62,0x63,0x64,0x65,0x66};
char t = PINA;

void main(void) {
	DDRA=0xff;    
	PORTA=0x00;
	while (1) {
		for(i=0 ; i<t ; i++) {
			PORTB=des[15];
			delay_ms(10);
		}
	}
}
