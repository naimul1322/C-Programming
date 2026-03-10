#include<stdio.h>
int main()
{
    int num1,num2,rem;
    scanf("%d %d",&num1, &num2);
    rem=num1%num2;
    while(rem!=0)
    {
        num1=num2;
        num2=rem;
        rem=num1%num2;
    }
    printf("the value is : %d",num2);

    return 0;
}
