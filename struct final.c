#include<stdio.h>
struct person
{
    int age;
    float sly;

};

int main()
{
    struct person p1,p2;
    printf("Enter the p1 information\n\n");
    printf("Enter the age: ");
    scanf("%d",&p1.age);
    printf("Enter the salary : ");
    scanf("%f",&p1.sly);

    printf("\n\n\t output: \n");

    printf("the age is :%d\n",p1.age);
    printf("the salary is :%.2f\n",p1.sly);


    printf("Enter the p2 information\n\n");
    printf("Enter the age: ");
    scanf("%d",&p2.age);
    printf("Enter the salary : ");
    scanf("%f",&p2.sly);

    printf("\n\n\t output: \n");

    printf("the age is :%d\n",p2.age);
    printf("the salary is :%.2f\n",p2.sly);
    return 0;
}
