#include <stdio.h>
#define TABINC 8

int main()
{
	int c, pos = 0, lastc = 0;
	printf("123456781234567812345678123456781234567812345678123456781234567812345678\n");
	while ((c = getchar()) != EOF) {
		++pos;
		if (c != ' ') {
			if (c != '\t') {
				int nb = pos - lastc;
				while (nb-- > 1) printf(" ");
				if (c == '\n') pos = 0;
			} else {
				pos += (TABINC - (pos - 1) % TABINC) - 1;
			}
			putchar(c);
			lastc = pos;
		} else {
			if ((pos % TABINC) == 0) {
				printf("\t");
				lastc = pos;
			}
		}
	}
	return 0;
}
