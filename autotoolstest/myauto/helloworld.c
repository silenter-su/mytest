#include <stdio.h>  
#include <string.h>  
extern int output(char* data);  
int main()  
{  
	int n=15;  
	printf("hellow world %d \n",n);  
	output("from helloword.c");  
	return 0;  
}  
