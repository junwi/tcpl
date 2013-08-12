#include <stdio.h>

void reverse(char *s)
{
	char *e = s;
	while (*e != '\0') e++;
	e--;
	while (e > s) {
		char c = *s;
		*s = *e;
		*e = c;
		s++;
		e--;
	}
}
int main()
{
	char str[] = "hello world!";
	reverse(str);
	printf("%s\n", str);
	return 0;
}
