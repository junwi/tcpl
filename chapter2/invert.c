#include "print_binary.h"
int invert(int x, int p, int n)
{
	unsigned int mask = -1;
	mask = ~(mask >> (p - n) << (p - n)) | (mask >> p << p);
	return (x & mask) | ~(x & ~mask);
}

int main()
{
	int x = (1 >> 10) - 1;
	printIntBinary(x);
	printIntBinary(invert(x, 7, 5));
	return 0;
}
