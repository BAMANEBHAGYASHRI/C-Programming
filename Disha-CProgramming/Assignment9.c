#accept  roolno name,marks of english,hindi,marathi,And calculate the folowing total marks,precentange,and print all the detals of student

#include<stdio.h>
void main()
{
    int rollnno,marks,m,h,e;
    float pre;
    char name [100];
    printf("Enter Your RollNo  ");
    scanf("%d",&rollnno);
    printf("Enter Your Name  ");
    scanf("%s",&name);
    printf("Enter The Marathi marks ");
    scanf("%d",&m);
    printf("Enter The English marks ");
    scanf("%d",&e);
    printf("Enter The Hindi marks ");
    scanf("%d",&h);
    marks=m+h+e;
    printf("total marks %d\n",marks);
    pre=marks/3;
    printf("Precentage %f",pre);
}
