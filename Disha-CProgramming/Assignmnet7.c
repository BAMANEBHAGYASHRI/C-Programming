#accpet the two numbers from user and interchange them(swapping)
#using third variable temp
#without using thitd variable

#include<stdio.h>
void main()
{
    int a,b,temp;
    int x,y;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapping %d\n\n",b);
    printf("--------without using third variable----------------\n");
    printf("enter the x value");
    scanf("%d",&x);
    printf("enter the y value");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("swapping%d=x %d=y",x,y);


}
