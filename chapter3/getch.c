#include <stdio.h>

static const int BUF_LIM = 100;
static int buff[BUF_LIM];
static int buffIndex = 0;
int getch(void)
{
	if (!buffIndex) return getchar();
	return buff[--buffIndex];
}
void ungetch(int c)
{
	if (buffIndex >= BUF_LIM)
		printf("Buffer is exceed the limit.");

	buff[buffIndex++] = c;
}
