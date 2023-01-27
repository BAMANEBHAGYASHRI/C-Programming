#accpet the 5 subject marks from users and calucalute the total marks and precentage and display it

#include<stdio.h>
void main()
{
    int a,b,c,d,e,marks;
    float per;
    printf("enter the 5 subject marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    marks=a+b+c+d+e;
    printf("Total Marks %d\n",marks);
    per=marks/5;
    printf("precentage %f",per);


}
