#include<stdio.h>

struct person {

char name;
int age;
float salary ;
};


int main()
{
    struct person p1,p2;
    p1.name='Namul';
    p1.age=25;
    p1.salary=45000.35;
    printf("person 1 \n");
    printf("Name: %c\n",p1.name);
    printf("Age: %d\n",p1.age );
    printf("Salary : %.2f\n",p1.salary);

    return 0;
}
