#include<stdio.h>
int main()
{
int n,rem,res=0;
printf("enter the number:");
scanf("%d",&n);
rem=n%10;
res=res+rem*rem*rem;
n=n/10;
if(res==n)
printf("the num is amstrong");
else
printf("the num is not amstrong");
return 0;
}
