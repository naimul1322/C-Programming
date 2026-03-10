#include<stdio.h>
 int main()
 {
     int num,i,sum=0;
     printf("Enter the last number of series: ");
     scanf("%d",&num);
     for(i=1; i<=num; i++)
     {
         sum=sum+i;
     }
     printf("%d ",sum);

     return 0;
 }
