#include<stdio.h>
 int main()
 {
     int num,i,count=0;
     printf("Enter the value: ");
     scanf("%d",&num);
   for(i=2; i<num; i++)
    if(num%i==0)
   {
       count++;
       break;
   }
     if(count==0){
        printf("%d is a prime number",num);
     }

        else
        printf("%d is not  a prime number",num);




     return 0;
 }
