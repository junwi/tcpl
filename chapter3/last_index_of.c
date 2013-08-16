#include <stdio.h>
#include <string.h>

int lastIndexOf(char *source, char *pattern)
{
	char *s = source, *p = pattern;
	while (*s++) ;
	while (*p++) ;
	for (s = source + ((s - source) - (p - pattern)); s >= source; s--) {
		char *t;
		for (t = s, p = pattern; *t && *p && *t == *p; ++t, ++p) {
		}
		if (!*p) return s - source;
	}
	return -1;
}

int main()
{
	char *s = "123123";
	char *p = "23";
	printf("%d\n", lastIndexOf(s, p));
	return 0;
}
