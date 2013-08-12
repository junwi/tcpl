#include <stdio.h>
typedef enum
{
	IN,
	OUT
} State;
int main()
{
	int c, nc = 0, nw = 0, nl = 0;
	State state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\n') ++nl;
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
		++nc;
	}
	printf("char: %d, word: %d, line: %d\n", nc, nw, nl);
	return 0;
}
