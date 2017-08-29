#include<stdio.h>
int main()
{
int a,fact=1;
printf("enter the value of a:");
scanf("%d",&a)
printf("factorial of a:");
fact=a*fact(a-1);
printf("%d",fact);
return 0;
}
