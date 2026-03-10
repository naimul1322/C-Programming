#include<stdio.h>
int main()
{
    float c, f;
    int choose ;
    printf("covert tempeture: \n");
    printf("1.covert  c to f\n");
    printf("2.covert  f to c\n");
    printf("Enter your choose: ");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
        {
            printf("convert tempeture: ");
            scanf("%f",&c);
            f=(c*1.8)+32;
            printf("%.2f",f);
            break;
        }case 2:
        {
            printf("convert tempeture: ");
            scanf("%f",&f);
            c=(f-32)/1.8;
            printf("%.2f",c);
            break;
        }
    default:
        printf("not vaild");

    }
    return 0;
}
