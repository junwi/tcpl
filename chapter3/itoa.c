#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int BUF_LEN = 100;

void itoa(int n, char s[], int base, int w)
{
	int sign;
	if ((sign = n) < 0) n = -n;
	char *p = s;
	do {
		int r = n % base;
		char c;
		if (r >= 10) c = 'a' + (r - 10);
		else c = '0' + r;
		*p++ = c;
	} while (n /= base);
	if (sign < 0) *p++ = '-';
	w = w - (p - s);
	while (w-- > 0) {
		*p++ = ' ';
	}
	*p = '\0';
	--p;
	while (s < p) {
		int t = *s;
		*s++ = *p;
		*p-- = t;
	}
}

int main()
{
	int n = 12580;
	char *s = (char *) malloc(BUF_LEN * sizeof(char));
	itoa(n, s, 16, 5);
	printf("%s\n", s);
	free(s);
	return 0;
}
