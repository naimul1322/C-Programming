#include<stdio.h>
int main()
{
    int num;
    double a,b,cal;
    printf(" *****Welcome to Calculator:******  \n\n\n\n");
    printf("1.Addtion for calculator:\n");
    printf("2.substration for calculator:\n");
    printf("3.multipication for calculator:\n");
    printf("4.division for calculator:\n");
    printf("5.modulus for calculator: \n");
    scanf("%d",&num);
    scanf("%lf %lf",&a,&b);


    switch(num)
    {
    case 1:
        cal=a+b;

        printf("addtion is: %.2lf",cal);

        break;
    case 2:

        cal=a-b;
        printf("subtration is: %.2lf",cal);
        break;
    case 3:
        cal=a*b;

        printf("Multipication is: %.2lf",cal);

        break;
    case 4:

        cal=a/b;
        printf("divison is: %.2lf",cal);
        break;

    default:
        printf("Invaild");

    }

    return 0;

}
