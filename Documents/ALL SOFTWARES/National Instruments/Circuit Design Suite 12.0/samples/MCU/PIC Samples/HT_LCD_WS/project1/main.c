#include "pic.h"

#define bitset(var,bitno)	((var) |= 1 << (bitno))
#define bitclr(var,bitno)	((var) &= ~(1 << (bitno))

// Commands to control LCD Graphical Display
const int CMD_SET_CURSOR 	= 0x21;		//SET CURSOR
const int CMD_TXHOME 		= 0x40;		//SET TXT HM ADD
const int CMD_TXAREA 		= 0x41;		//SET TXT AREA
const int CMD_GRHOME 		= 0x42;		//SET GR HM ADD
const int CMD_GRAREA 		= 0x43;		//SET GR AREA
const int CMD_OFFSET 		= 0x22;		//SET OFFSET ADD
const int CMD_ADPSET 		= 0x24;		//SET ADD PTR
const int CMD_SETDATA_INC 	= 0x0C0;	//WRITE DATA AND INCREASE ADP
const int CMD_AWRON 		= 0x0B0;	//SET AUTO WRITE MODE
const int CMD_AWROFF 		= 0x0B2;	//RESET AUTO WRITE MODE

const int TEXT_NUM = 35;
// Text data "Graphical LCD T6963C   for Multisim"
const char textTable[35] = 
{ 0x27, 0x52, 0x41, 0x50, 0x48, 0x49, 0x43, 0x41, 0x4c, 0x00, \
  0x2C, 0x23, 0x24, 0x00, 0x34, 0x16, 0x19, 0x16, 0x13, 0x23, \
  0x00, 0x00, 0x00, 0x46, 0x4f, 0x52, 0x00, 0x2d, 0x55, 0x4c, \
  0x54, 0x49, 0x53, 0x49, 0x4d };

// Set Port B as output pins
void SetPortBOutput(void)
{
	PORTB = 0x00;
	bitset(STATUS, RP0);
	TRISB = 0X00;
	bitclr(STATUS, RP0);
}

void SendCommand(char cmd)
{
	SetPortBOutput();
	PORTB = cmd;
	PORTA = 0x0B; 		// Send write command ready to LCD (1011)
	bitset(PORTA, 2);
}

void SendDataByte(char databyte)
{
	SetPortBOutput();
	PORTB = databyte;
	PORTA = 0X0A; 		// Write data ready (1010)
	bitset(PORTA, 2);
}

void SendData(char highbyte, char lowbyte)
{
	SendDataByte(lowbyte);
	SendDataByte(highbyte);
}

void init(void)
{
	bitclr(STATUS, RP0);	// Select Bank 0
	PORTA = 0x00;
	PORTB = 0x00;
	bitset(STATUS, RP0);	// Select Bank 1
	OPTION = 0x80;			// Disable weak pull up resistors
	TRISA = 0x00;			// Set Port A pins to output mode
	TRISA = 0x00;			// Set Port B pins to output mode
	bitclr(STATUS, RP0);	// Select Bank 0
	PORTA = 0x0F;			// No commands ready

	// Select display mode to graph + text, cursor off
	SendCommand( 0x9C );

	// Set graphic mode home address to 0x0000
	SendData(0,0);
	SendCommand(CMD_GRHOME);

	// Set text mode home address to 0x2941
	SendData(0x29, 0x41);
	SendCommand(CMD_TXHOME);

	// Set character mode to use OR, use internal CG
	SendCommand(0x80);
}

// Write data in "textTable" array to be displayed 
// on Graphical LCD display to LCD's internal RAM.
void DisplayLCDText(void)
{
	int nIndex = 0;

	SendData(0x29, 0x7D);
	SendCommand(CMD_ADPSET);
	SendCommand(CMD_AWRON);
	
	for( nIndex = 0; nIndex<TEXT_NUM; nIndex++ )
	{
		SendDataByte(textTable[nIndex]);
	}

	SendCommand(CMD_AWROFF);
}

// Move text right starting at the start address on the LCD
// specified by startAddrHigh and startAddrLow a number
// of steps specified by numSteps.
void MoveTextRight(int startAddrHigh, int startAddrLow, int numSteps)
{
	int nIndex = 0;
	for( nIndex = 0; nIndex<numSteps; nIndex++ )
	{
		SendData(startAddrHigh, startAddrLow);
		SendCommand(CMD_TXHOME);
		startAddrLow--;
	}
}

// Move text left starting at the start address on the LCD
// specified by startAddrHigh and startAddrLow a number
// of steps specified by numSteps.
void MoveTextLeft(int startAddrHigh, int startAddrLow, int numSteps)
{
	int nIndex = 0;
	for( nIndex=0; nIndex<numSteps; nIndex++ )
	{
		SendData(startAddrHigh, startAddrLow);
		SendCommand(CMD_TXHOME);
		startAddrLow++;
	}
}

void main()
{
	init();	

	DisplayLCDText();

	while( 1 )
	{
		MoveTextRight(0x29, 0x41, 20);
		MoveTextLeft(0x29, 0x2D, 20);
	}
}





