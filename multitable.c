#include<stdio.h>
int main()
{
    while(1){
        int x,i;
    printf("enter the number: ");
    scanf("%d",&x);
    for(i=1; i<=10; i++)
    {
        printf(" %d X %d=%d\n",x,i,x*i);
    }
    }


    return 0;
}
