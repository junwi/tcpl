#include <stdio.h>

int main()
{
	int p, c;
	p = EOF;
	while ((c = getchar()) != EOF) {
		if (p != ' ' || c != ' ') {
			putchar(c);
		}
		p = c;
	}
	return 0;
}
