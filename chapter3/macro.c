#include <stdio.h>

#define test(x) printf(#x " = %s\n", x)
#define swap(t,a,b)		\
do {				\
	t temp = a;		\
	a = b;			\
	b = temp;		\
} while (0)			\

int main()
{
	test("(double) 2/3");
	int a = 3, b = 4;
	swap(int,a,b);
	printf("%d %d\n", a, b);
	return 0;
}
