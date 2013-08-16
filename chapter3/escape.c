#include <stdio.h>
#include <string.h>

const size_t BUF_LEN = 1000;

void escape1(char *s, char *t)
{
	while (*s) {
		switch (*s) {
			case '\t':
				*t++ = '\\';
				*t++ = 't';
				s++;
				break;
			case '\n':
				*t++ = '\\';
				*t++ = 'n';
				s++;
				break;
			default:
				*t++ = *s++;
		}
	}
	*t = '\0';
}

void escape(char *s)
{
	char *p = s;
	int n = 0;
	while (*p) {
		switch (*p++) {
			case '\t':
			case '\n':
				++n;
				++n;
				break;
			default:
				++n;
		}
	}
	char *e = s + n;
	while (e >= s) {
		switch (*p) {
			case '\t':
				*e-- = 't';
				*e-- = '\\';
				--p;
				break;
			case '\n':
				*e-- = 'n';
				*e-- = '\\';
				--p;
				break;
			default:
				*e-- = *p--;
		}
	}
}

int main()
{
	char s[BUF_LEN];
	strncpy(s, "Hello	World!\n", BUF_LEN);
	printf("%s\n", s);
	char a[BUF_LEN];
	escape1(s, a);
	printf("%s\n", a);
	escape(s);
	printf("%s\n", s);
	return 0;
}
