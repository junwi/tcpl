#include <stdio.h>

typedef enum { IN, OUT} State;
int main()
{
	int c;
	State state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			if (state == IN) {
				state = OUT;
				printf("\n");
			}
		} else {
			putchar(c);
			if (state == OUT) {
				state = IN;
			}
		}
	}
	return 0;
}
