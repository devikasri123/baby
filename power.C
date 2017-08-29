#include <stdio.h>
int main()
{
int base, exponent;
int result = 1;
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &exponent);
while (exponent != 0)
{
 result *= base;
--exponent;
}
printf("Answer = %d", result);
return 0;
}
