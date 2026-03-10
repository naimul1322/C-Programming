#include<stdio.h>
int main()
{
    int n,i,max;
    printf("Enter the value : ");
    scanf("%d",&n);
    int ara[n+6];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
   max=ara[0];
   for(i=1; i<n; i++)
   {
       if(max<ara[i]){
        max= ara[i];
       }
   }
   printf("Maximum value is: %d",max);



    return 0;
}
