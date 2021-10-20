#include"kernel.h"

static UINT16 VGA_DefaultEntry(unsigned char ch_to_print)
{
	return (UINT16)ch_to_print | (UINT16)WHITE_COLOR << 8;
}

void KERNEL_MAIN()
{
	TERMINAL_BUFFER = (UINT16*)VGA_ADDRESS;
	
	TERMINAL_BUFFER[0] = VGA_DefaultEntry('H');
	TERMINAL_BUFFER[1] = VGA_DefaultEntry('e');
	TERMINAL_BUFFER[2] = VGA_DefaultEntry('l');
	TERMINAL_BUFFER[3] = VGA_DefaultEntry('l');
	TERMINAL_BUFFER[4] = VGA_DefaultEntry('o');
	TERMINAL_BUFFER[5] = VGA_DefaultEntry(' ');
	TERMINAL_BUFFER[6] = VGA_DefaultEntry('L');
	TERMINAL_BUFFER[7] = VGA_DefaultEntry('i');
	TERMINAL_BUFFER[8] = VGA_DefaultEntry('c');
	TERMINAL_BUFFER[9] = VGA_DefaultEntry('h');
	TERMINAL_BUFFER[10] = VGA_DefaultEntry('!');
	TERMINAL_BUFFER[11] = VGA_DefaultEntry('!');
}

