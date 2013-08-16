#include <stdio.h>
#include <string.h>

const int BUF_LEN = 1000;

void expand(char s[], char t[])
{
	char c;
	while ((c = *s++)) {
		if (*s == '-' && *(s+1) >= c) {
			++s;
			while (c < *s) {
				*t++ = c++;
			}
		} else {
			*t++ = c;
		}
	}
	*t = '\0';
}

int main()
{
	char s[] = "-a-z-z-A-S-Z";
	char t[BUF_LEN];
	expand(s,t);
	printf("%s\n", t);
	return 0;
}
