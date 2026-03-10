#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,s,area;

scanf("%f %f %f",&x, &y, &z);
s=(x+y+z)/2;
area= sqrt (s*(s-x)*(s-y)*(s-z));
printf("the number is: %.3f\n",area);
return 0;
}
