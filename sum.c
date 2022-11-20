#include<stdio.h>
int add(int x,int y){
    int s=x+y;
    return s;
}
int main()
{
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("The sum of is : ",sum);
    return 0;
}