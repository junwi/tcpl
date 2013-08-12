#include <stdio.h>
#define MAX_LINE 1000
int getLine(char *line, int maxline);
void copy(char *from, char *to);
int main() {
	int max = 0, len;
	char line[MAX_LINE];
	char longest[MAX_LINE];
	while ((len = getLine(line, MAX_LINE)) > 0) {
		if (len > max) {
			max = len;
			copy(line, longest);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;
}
int getLine(char *line, int limit)
{
	int c, len = 0;
	while (len < limit - 1) {
		c = getchar();
		if (c == EOF) {
			line[len] = '\0';
			return len;
		}
		line[len++] = c;
		if (c == '\n') {
			line[len] = '\0';
			return len;
		}
	}
	line[len] = '\0';
	while ((c = getchar()) != EOF && c != '\n') ++len;
	if (c == '\n') ++len;
	return len;
}
void copy(char *from, char *to)
{
	while ((*to++ = *from++) != '\0') ;
}
