#include<stdio.h>

int fact (int i)
{
    if(i<=1)
    {
        return i;
    }
    return i * fact(i-1);
}
int main()
{
    int i=15;
  //  scanf("%d",i);
    printf("fact is %d is number is %d",i ,fact(i));
    return 0;
}
