#include<stdio.h>
 int main()
 {
     int n,i,found=-1;
     printf("Enter the value: ");
     scanf("%d",&n);

     int a[n+4];
     for(i=0; i<n; i++)
     {
         scanf("%d",&a[i]);
     }

     int search;
     printf("Enter the search number: ");
     scanf("%d",&search);

     for(i=0; i<n; i++)
     {
         if(a[i]==search)
         {
             found=i;
             break;
         }
     }
     if(found==-1)
     {
         printf(" data not found.");
     }
     else{
        printf("%d data is found index %d.",search,found);
     }




     return 0;
 }
