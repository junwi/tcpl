#include <stdio.h>
#include <string.h>
const int BUF_LEN = 1000;

void unescape(char *s, char *t)
{
	for (; *s; ++s) {
		switch (*s) {
			case '\\': {
				switch (*(s+1)) {
					case 't':
						*t++ = '\t';
						++s;
						break;
					case 'n':
						*t++ = '\n';
						++s;
						break;
					default:
						*t++ = '\\';
						*t++ = *s;
				}
				break;
			}
			default:
				*t++ = *s;
		}
	}
}

int main()
{
	char s[BUF_LEN];
	char t[BUF_LEN];
	strncpy(s, "Hello\\tWor\\nld\n", BUF_LEN);
	printf("%s\n", s);
	unescape(s, t);
	printf("%s\n", t);
	return 0;
}
