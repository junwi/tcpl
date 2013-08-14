#include <stdio.h>

char lower(char c)
{
	return (c >= 'A' && c <= 'Z') ? ('a' + c - 'A') : c;
}


int main()
{
	char s[] = "Hello World!";
	char *p = s;
	while (*p) {
		*p = lower(*p);
		++p;
	}
	printf("%s\n", s);

	return 0;
}
