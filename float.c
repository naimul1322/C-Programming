#include<stdio.h>
 int main()
 {
     float num,i,sum=0;
     scanf("%f",&num);
     for(i=1.5; i<=num; i++)
     {
         printf("%.2f\n",i);
         sum=sum+i*i;
     }
     printf("\nsum of digits:%.2f\n",sum);

     return 0;
 }
