#include <stdio.h>
void trim(char *str)
{
	char *p = str;
	while (*str != '\0') {
		if (*str != ' ' && *str != '\t') p = str;
		str++;
	}
	printf("|\n");
	*(++p) = '\0';
}

int main()
{
	char str[] = "hello world    		";
	trim(str);
	printf("%s|\n", str);
	char str1[] = "hello world     		!  		";
	trim(str1);
	printf("%s|\n", str1);
	return 0;
}
