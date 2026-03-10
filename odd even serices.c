#include<stdio.h>
int main()
{
    int num,i,even=0,odd=0;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i%2==0)

            even=even+i;
        else
            odd=odd+i;
    }
    printf("%d",odd-even);

    return 0;
}

