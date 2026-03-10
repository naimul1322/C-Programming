#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter the name: ");
    gets(s1);
    strlwr(s1);
    printf("%s",s1);

    return 0;
}
