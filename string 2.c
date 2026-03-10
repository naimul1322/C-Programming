#include<stdio.h>
int main()
{
    char s1[30]="Bangladesh";
    char s2[30]="Japan";
    char swp[30];

    strcpy(swp,s1);
    strcpy(s1,s2);
    strcpy(s2,swp);

    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}
