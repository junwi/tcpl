#include <stdio.h>

int any(char *s1, char *s2)
{
	if (!*s2) return -1;
	int p = 0;
	while (s1[p]) {
		char *a = s1 + p, *b = s2;
		while (*a && *b && *a == *b) {
			++a;
			++b;
		}
		if (!*b) return p;
		++p;
	}
	return -1;
}


int main()
{
	char *s1 = "hello worlld";
	char *s2 = "ll";
	char *s3 = "l wo";
	printf("%d %d\n", any(s1, s2), any(s1, s3));
	return 0;
}
