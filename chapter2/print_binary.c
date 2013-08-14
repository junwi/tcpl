#include "print_binary.h"
void printIntBinary(int i)
{
	unsigned int mask = INT_MIN;
	do {
		putchar(mask & i ? '1' : '0');
	} while (mask >>= 1);
	putchar('\n');
}
