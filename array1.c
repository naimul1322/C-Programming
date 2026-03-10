#include<stdio.h>
 int main()
 {
     int n,sum=0,mul;
     float avg;
     printf("Enter the value :");
     scanf("%d",&n);
     int ara[n+6];
     for(int i=0; i<n; i++)
     {
         scanf("%d",&ara[i]);
     }
     printf("\n");

     for(int i=0; i<n; i++)
     {
         printf("%d\n",ara[i]);
         sum= sum+ ara[i];

     }
     printf("The sum is all interger number: %d\n",sum);

     printf("\n");
     avg= (float)sum/n;
     printf("The avarage is : %.2f",avg);


     return 0;
 }
