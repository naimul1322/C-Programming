#include<stdio.h>
int main()
{
    char s1[]="Naimul Islam";
    char s2[]="Naimul Islam";

    int c= strcmp(s1,s2);
    if(c==0)
    {
        printf("equals");
    }
    else
        printf("not equals ");

    return 0;
}
