#include<stdio.h>
int main()
{
    int num,sum=0,temp,rem;
    printf("Enter the positive number: ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0)
    {

        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("%d is reverse number\n",sum);

   if(num==sum)
   {
       printf("paliendrome");
   }
   else{
    printf("not palirndrom");
   }
    return 0;
}
