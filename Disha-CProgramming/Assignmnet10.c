#Accpet id ,name, & basic salary of an employee  And calculate the da,hra,ta,gross saalry,itax, net salary

#include<stdio.h>
void main()
{
    int id ,salary,da,hra,ta,gs,itax,ns;
    char name[100];
    printf("Enter Your ID  ");
    scanf("%d",&id);
    printf("Enter Your Name  ");
    scanf("%s",&name);
    printf("Enter you're Salary ");
    scanf("%d",&salary);
    da=salary*5%
    printf("Da- %d\n",da);
    hra=salary*12%
    printf("Hra-%d\n",hra);
    ta=salary*8;
    printf("Ta-%d\n",ta);
    gs=salary+hra+da+ta;
    printf("Gross Salary-%d\n",gs);
    itax=salary*10%
    printf("Itax-%d\n",itax);
    ns=gs-itax;
    printf("net salary-%d",ns);

}
