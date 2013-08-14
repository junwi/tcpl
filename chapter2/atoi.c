#include <stdio.h>

int atoi(char *s)
{
	int n = 0;
	while (*s >= '0' && *s <= '9') {
		n = n * 10 + (*s - '0');
		++s;
	}

	return n;
}

int main()
{
	char *s = "0123025450";
	printf("%s %d\n", s, atoi(s));
	return 0;
}
