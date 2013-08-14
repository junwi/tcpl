#include "print_binary.h"
int rightrot(int x, int n)
{
	int size = sizeof(x) * 8;
	size = size - n;
	unsigned int a = x;
	return (a >> n) | (a << size);
}
int main()
{
	int x = 12530;
	printIntBinary(x);
	printIntBinary(rightrot(x, 6));
	return 0;
}
