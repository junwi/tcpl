#include <stdio.h>
#include <limits.h>

void printIntBinary(int x)
{
	unsigned int mask = INT_MIN;
	do {
		putchar(mask & x ? '1' : '0');
	} while (mask >>= 1);
	putchar('\n');
}

int main()
{
	int x = 12580;
	printIntBinary(x);
	printIntBinary(x ^ 0);
	printIntBinary(x ^(~0));
	return 0;
}
