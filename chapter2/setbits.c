#include "print_binary.h"

int setBits(int x, int p, int n, int y)
{
	unsigned int mask = -1;
	mask = ~(mask >> (p - n) << (p - n)) | (mask >> p << p);
	x = (x & mask) | (y & ~(mask));
	return x;
}
int main()
{
	int a = setBits(0, 10, 5, -1);
	printIntBinary(a);
	return 0;
}
