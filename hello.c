#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two interger number: ");
    scanf("%d %d",&a,&b);
    int rem=a%b;

    while(rem!=0)
    {
        a=b;
        b=rem;
        rem=a%b;
    }
    printf("%d",b);
    return 0;
}
