#include<stdio.h>

int rec(int i){
if(i<=0){
    return 1;
}
return i*rec(i-1);
}
int main ()
{
    int i;
    scanf("%d",&i);
    printf("the valure is %d",rec(i));
    return 0;
}
