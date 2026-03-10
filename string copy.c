#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="c programming";
    char target[30];

    strcpy(target,s1);
    printf("%s\n",s1);
    printf("%s\n",target);

    return 0;
}
