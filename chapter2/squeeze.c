#include <stdio.h>

void squeeze(char *s, char c)
{
	char *p = s;
	while (*s != '\0') {
		if (*s != c) {
			*p++ = *s;
		}
		s++;
	}
	*p = '\0';
}
int main()
{
	char s[] = "It's up to you!";
	squeeze(s, 't');
	printf("%s\n", s);
	return 0;
}
