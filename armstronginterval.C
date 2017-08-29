#include <stdio.h>
int main()
{
int m, n, i,flag1,flag2, rem, n = 0, res = 0;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &m, &n);
printf("Armstrong numbers between %d an %d are: ",m,n);
for(i =m+1; i < n; ++i)
{
flag2 = i;
flag1= i;
while (temp1 != 0)
{
flag1 /= 10;
++n;
}
while (flag2 != 0)
{
rem = flag2 % 10;
res+= pow(rem, n);
temp2 /= 10;
}
if (res== i) 
{
printf("%d ", i);
}
n = 0;
res= 0;
}
return 0;
}
