#include <stdio.h>
int main ()
{
	int y,sum;
	scanf("%d",&y);
	int x[y];
	for (int i=0; i<y; i++)
	{
		scanf("%d",&x[i]);
    }
	for (int j=y-1; j>=0; j--)
	{
       printf("%d ",x[j]);
	}
	
	return 0;
}