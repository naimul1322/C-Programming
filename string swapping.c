#include<stdio.h>
int main()
{
    char s1[]="Bangladesh";
    char s2[]="Japan";
    char temp[30];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("%s\n",s1);

    printf("%s\n",s2);

    return 0;
}
