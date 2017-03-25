#include <stdio.h>

void main()
{
	int a = 100;
	printf("\x1b[31m" "This is a color test!!\n%d" "\x1b[0m",a);
}
