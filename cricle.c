#include<stdio.h>
#define pi 3.1416
int main()
{
    double area,r;
    printf("Enter the area radious : ");
    scanf("%lf",&r);
    area=pi*r*r;
    printf("\nthe area is : %.2lf\n",area);

    return 0;
}
