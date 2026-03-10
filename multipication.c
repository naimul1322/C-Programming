#include<stdio.h>
 int main()
 {
     int num,i,result=1;
     printf("enter the number: ");
     scanf("%d",&num);
     for(i=1; i<=num; i=i+2)
     {
         result=result* i*i;
     }
     printf("%d",result);

     return 0;
 }
