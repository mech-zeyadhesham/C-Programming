#include <stdio.h>
int main(void)

{
	int n;
scanf("%d",&n);
int sum=0;
	while (n>0) 
	{
         sum+= (n%10);
        n=n/10;

    }
			printf("%d\n",sum);

}