#include <stdio.h>

double atof(char s[])
{
	double n;
	int power = 1;
	int sign = (*s == '-' ? -1 : 1);
	if (*s == '-' || *s == '+') ++s;
	for (n = 0.0; *s >= '0' && *s <= '9'; ++s) {
		n = n * 10 + (*s - '0');
	}
	if (*s == '.') {
		for (++s; *s >= '0' && *s <= '9'; ++s) {
			n = n * 10 + (*s - '0');
			power *= 10;
		}
	}
	if (*s == 'e' || *s == 'E') {
		++s;
		int f = (*s == '-' ? -1 : 1);
		int p = 0;
		if (*s == '-' || *s == '+') ++s;
		for (; *s >= '0' && *s <= '9'; ++s) {
			p = p * 10 + (*s - '0');
		}
		if (f > 0) {
			while (p--) {
				n *= 10;
			}
		} else {
			while (p--) {
				power *= 10;
			}
		}
	}
	return n / power;
}

int main()
{
	char a[] = "3.1415926";
	printf("%f\n", atof(a));
	char b[] = "0.618e2";
	printf("%f\n", atof(b));
	char c[] = "3.541E-3";
	printf("%f\n", atof(c));
	return 0;
}
