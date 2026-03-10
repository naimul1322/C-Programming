#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    //printf("%d is reverse of input number\n",sum);

    if(num==sum)

        printf("arstrong");

    else
        printf("not arstrong");

    return 0;
}
