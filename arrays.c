#include <stdio.h>
int main ()
{
	int y,sum;
	scanf("%d",&y);
	int x[y];
	for (int i=0; i<y; i++)
	{
		scanf("%d",&x[i]);
        sum+=x[i];
    }
    printf("%i",sum);
	return 0;
}
