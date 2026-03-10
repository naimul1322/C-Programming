#include<stdio.h>

int main()
{
    int ara1[20],ara2[20],i,n;
    printf("how many number you wants: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara1[i]);
    }

    printf("ara1:");
    for(i=0; i<n; i++)
    {
        printf("%d\n  ",ara1[i]);
    }
   for(i=0; i<n; i++){
    ara2[20]=ara1[20];
   }

   printf("ara2:");
    for(i=0; i<n; i++)
    {
        printf("%d  ",ara2[i]);
    }

    getch();
}
