#include <stdio.h>

int htoi(char *s)
{
	if (*s == '0') {
		++s;
		if (*s == 'x' || *s == 'X') ++s;
	}
	int n = 0;
	while (1) {
		int i = 0;
		if (*s >= '0' && *s <= '9') {
			i = *s - '0';
		} else if (*s >= 'a' && *s <= 'f') {
			i = *s - 'a' + 10;
		} else if (*s >= 'A' && *s <= 'F') {
			i = *s - 'A' + 10;
		} else {
			break;
		}
		n = n * 16 + i;
		++s;
	}
	return n;
}
int main()
{
	char *s = "0x123abc";
	printf("%d %d\n", 0x123abc, htoi(s));
	return 0;
}
