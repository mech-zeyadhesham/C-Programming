#include <stdio.h>
void main (void)
{
	char ch, s[100];
	char sen[100];
    scanf("%c\n", &ch);
    scanf("%s\n", &s);
    scanf("%[^\n]%*c", &sen);	
	
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}