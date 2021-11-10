#include <stdio.h>
void main (void)
{
	int x = 123 , a , b , c;
	a = x%10; x=x/10; 
	b = x%10; x=x/10;
	c = x%10; x=x/10;
	printf("%d%d%d",a,b,c);
}

// simplier
