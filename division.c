#include<stdio.h>
 int main()
 {
     double num,i,sum=0;
     printf("enter the number: ");
     scanf("%lf",&num);
     for(i=1; i<=num; i++)
     {
         sum=sum+(1/i);
     }
     printf("%.2lf",sum);

     return 0;
 }
