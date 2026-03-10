#include<stdio.h>
int main()
{
    int num;
    float a,b;
    printf("\t*** welcome to our calculator ***\n\n\n");
    printf("1.sum of calculator:\n");
    printf("2.sub of calculator:\n");
    printf("3.mul of calculator:\n");
    printf("4.division of calculator:\n");
    printf("Enter your choose:\n");

    scanf("%d",&num);

    scanf("%f %f",&a, &b);
    switch (num)
    {
    case 1:
        printf("%.3f",a+b);
        break;
    case 2:
        printf("%.3f",a-b);
        break;
    case 3:
        printf("%.3f",a*b);
        break;
    case 4:
        printf("%.3f",a/b);
        break;
        case 5:
        printf("%.3f",a!=b);
        break;
    }
    return 0;
}
