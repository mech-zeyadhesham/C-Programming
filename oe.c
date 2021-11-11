#include <stdio.h>
void num (int x);
void oe(int x);
int main(void)
{
 
    int x,y;
	scanf("%d\n%d",&x,&y);

	for (int i=x; i<=y;i++)
	{
		num(i);
	}
 
     for (int i=x; i<=y;i++)
	 { 
           if (i>9)
             {
              oe(i);
			  }
     }
             return 0;
}


void num (int x)
{
	

	if (x==1)
	    printf("one\n");
    else if(x==2)
		printf("two\n");
	else if(x==3)
		printf("three\n");
	else if(x==4)
		printf("four\n");
	else if(x==5)
		printf("five\n");
	else if(x==6)
		printf("six\n");
	else if(x==7)
		printf("seven\n");
	else if(x==8)
		printf("eight\n");
	else if(x==9)
		printf("nine\n");

}

void oe(int x)
{
	if (x%2==0)
		printf("even\n");
	else 
		printf("odd\n");
}