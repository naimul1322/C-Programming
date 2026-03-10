#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    printf("Enter the values: ");
    scanf("%d",&n);
    int ara[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum+ara[i];
    }
    printf("Sum is:%d\n",sum);
     avg = (float)sum/n;
     printf(" Avarag is: %.2f",avg);


    return 0;
}
