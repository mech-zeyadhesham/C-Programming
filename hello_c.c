#include <stdio.h>
void main (void)
{
	char s[100];
    scanf("%[^\n]%*c", &s);
	printf("Hello, World!\n%s",s);	
}