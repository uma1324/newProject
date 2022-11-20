#include<stdio.h>
int multiply(int x,int y){
    int s=x*y;
    return s;
}
int main()
{
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    int m=multiply(a,b);
    printf("The multiplication is : ",m);
    return 0;
}