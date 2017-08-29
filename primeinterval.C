#include <stdio.h>
int main()
{
int m,n, i,temp;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&m,&n);
printf("Prime numbers between %d and %d are: ",m,n);
while(m<n)
{
temp = 0;
for(i = 2; i <= m/2; ++i)
{
if(m% i == 0)
{
temp= 1;
break;
}
}
if (temp== 0)
printf("%d ", m);
++m;
}
return 0;
}
