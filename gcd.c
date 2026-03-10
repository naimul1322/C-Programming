#include<stdio.h>
int main()
{
    int num1, num2, rem,lcm;
    scanf("%d %d",&num1, & num2);
    rem=num1%num2;
    while(rem!=0)
    {
        num1=num2;
        num2=rem;
        rem=num1%num2;
    }

    printf("%d is gcd of input two numbers\n",num2);
      lcm=(num1*num2)/num2;
    printf("%d is lcm of two numbers",lcm);
    return 0;
}
