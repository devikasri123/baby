#include <stdio.h>
int main()
{
int n, reversedInteger = 0, remainder;
printf("Enter an integer: ");
scanf("%d", &n);
while( n!=0 )
{
remainder = n%10;
reversedInteger = reversedInteger*10 + remainder;
n /= 10;
}
if (n == reversedInteger)
printf("%d is a palindrome.", n);
else
printf("%d is not a palindrome.", n);
 return 0;
}
