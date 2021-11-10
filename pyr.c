#include <stdio.h>
void main(void)
{
	int n;
	scanf("%d",&n);
	for (int i=(2*n)-1; i!=0; i--)
	{
		printf("\n");
		printf("%d",n);
		for (int j=(2*n)-1; j!=0; j--)
		{
			printf("Z");
		}
		printf("%d",n);

	}
	
}