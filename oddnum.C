#include <stdio.h>
int main()
{
int n, m, i, flag;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&n,&m);
printf("Prime numbers between %d and %d are: ",n,m);
while (n< m)
{
flag = 0;
for(i = 2; i <= n/2; ++i)
{
if(n%i==0)
flag = 1;
break;
}
}
if (flag == 0)
printf("%d ", n);
++n;
}
return 0;
}
