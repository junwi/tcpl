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

int bitCount(int x)
{
	int n = 0;
	while (x) {
		++n;
		x = x & (x - 1);
	}
	return n;
}

int main()
{
	int x = 17173;
	printIntBinary(x);
	printf("%d\n", bitCount(x));
	return 0;
}
