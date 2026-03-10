#include<stdio.h>
 int main()
 {
     int n,i;
     printf("enter the number : ");
     scanf("%d",&n);
     int arr[n+5];
     for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

        for (int j=0; j<=i; j++)
     printf("%d \n", arr[j]);


     return 0;
 }
