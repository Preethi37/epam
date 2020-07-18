#include<htc.h>

void incrementDisplay(void);
void setPorts(void);
void delay(int);

// value to be displayed to the LCD
int displayValue = 0;

// Enable watchdog timer
__CONFIG(WDTE_ON);

void main()
{
	setPorts();
	while(1){
		incrementDisplay();
	}
}

// function displays the value and then increments it
void incrementDisplay(void)
{
	PORTA = displayValue;
	displayValue++;
	delay(0xA0);
}

// Function will setup the ports for the PIC
void setPorts(void)
{
	TRISB = 0xFF;	// set Port A as inputs
	TRISA = 0x00;	// set Port B as outputs

	OPTION_REG = 0x08;	// setting watchdog timer
}

// Function delays simulation by an amount
void delay(int amount)
{
	for(;amount > 0; amount--)
		if(RB0){		// If the button has been pressed then set the PIC to sleep
			asm("CLRWDT");
			asm("SLEEP");
		}
}

