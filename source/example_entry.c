#include "irq.h"
#include "lcd.h"

void entry(){
	irqLock = 0;
	lcdExtEntryFunct = irqDisableSec;
	lcdExtExitFunct = irqEnableSec;	
	lcdInit(32);
	lcdDisplayON();
	return;
}
