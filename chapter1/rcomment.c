#include <stdio.h>
void rcomment();//remove comments
void commentLine();
void comment();
void quote(char);

/*
remove comments
*/
void rcomment()
{
	printf("remove comments /* test */");
	int c, d;
	while ((c = getchar()) != EOF) {
		switch (c) {
			case '/':
				d = getchar();
				if (d == '/') commentLine();
				else if (d == '*') comment();
				else {
					putchar(c);
					putchar(d);
				}
				break;
			case '\'':
			case '"':
				quote(c);
				break;
			default:
				putchar(c);
		}
	}
}
void commentLine()
{
	int c;
	while ((c = getchar()) != EOF && c != '\n') ;
}
void comment()
{
	int c, d;
	c = getchar();
	d = getchar();
	while (!(c == '*' && d == '/')) {
		c = d;
		d = getchar();
	}
}
void quote(char q)
{
	putchar(q);
	int c, p = EOF;
	while ((c = getchar()) != EOF) {
		putchar(c);
		if (c != q || p == '\\') {
			p = c;
		} else {
			break;
		}
	}
}

int main()
{
	rcomment();
	return 0;
}
