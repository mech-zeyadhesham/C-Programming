#include <stdio.h>
int abs(int x);

void update(int *a,int *b) 
{
    int sum = *a + *b;
    int sub = *a - *b;	
	*a = sum;
	*b = sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", abs(a), abs(b));

    return 0;
}