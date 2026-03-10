#include<stdio.h>
 int main()
 {
     int n,sum=0;
     float avg;
     printf("Enter the number: ");
     scanf("%d",&n);
     printf("\n");

     int ara[n+4];
     for(int i=0; i<n; i++)
     {
         printf("numbers are [%d]: ",i+1);
         scanf("%d",&ara[i]);
     }
     printf("\n");

     for(int i=0; i<n; i++)
     {
         //printf("the number is: %d\n",ara[i]);
         sum=sum+ara[i];
     }
     printf("the sum of number is : %d\n",sum);


     avg=sum/n;

     printf("the avarage is : %.2f",avg);

     return 0;
 }
