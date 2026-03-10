#include<stdio.h>
int main()
{
    int num,i,sum=0,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
   while(temp!=0)
   {
       rem=temp%10;
       sum=sum*10+rem;
       temp=temp/10;
   }
   printf("%d",sum);

    return 0;
}
