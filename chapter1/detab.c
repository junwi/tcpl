#include <stdio.h>
#define TABINC 8
int main()
{
	int c, pos = 0;
	printf("1234567812345678123456781234567812345678\n");
	while ((c = getchar()) !=EOF) {
		if (c == '\t') {
			int nb = TABINC - (pos % TABINC);
			pos += nb;
			while (nb-- > 0) {
				printf(" ");
			}
		} else {
			putchar(c);
			if (c == '\n') 	pos = 0;
			else ++pos;
		}
	}
	return 0;
}
