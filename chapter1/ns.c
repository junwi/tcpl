#include <stdio.h>
int main()
{
	int ns = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ')
			++ns;
	}
	printf("%d\n", ns);
	return 0;
}
