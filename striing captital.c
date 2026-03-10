#include<stdio.h>
int main()
{
    char s1[30];
    int i,cap,small,digits;
    i=cap=small=digits=0;
    printf("Enter the string: ");
    gets(s1);

    while(s1[i]!='\0')
    {
        if(s1[i]>=65 && s1[i]<=90)
            cap++;
        else if(s1[i]>=97 && s1[i]<=122)
            small++;
        else if(s1[i]>=48 && s1[i]<=57)
            digits++;

        i++;
    }
    printf("Capatial letter : %d\n",cap);
    printf("Small letter : %d\n",small);
    printf("Digits letter : %d\n",digits);


    return 0;
}
