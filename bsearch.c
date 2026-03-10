#include<stdio.h>
int main()
{
   while(1)
   {
        int n,i;
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

     int left,right,mid;
     left=0;
     right=n-1;

     while(left<=right)
     {
         mid=(left+right)/2;
         if(a[mid]==search)
         {
             printf("%d is found \n",mid);
             return 0;
         }
         else if(a[mid]<search)
         {
             left=mid+1;
         }
         else
         {
             right=mid-1;
         }
     }
     printf("data not found\n");

   }


    return 0;
}
