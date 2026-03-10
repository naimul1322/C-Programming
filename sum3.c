#include<stdio.h>

int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter the number: \n");

    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("Sum is %d\n",sum);
    printf("Avg is %.2f\n",avg);

}
