#include<stdio.h> 
int main()
{
int n,m,rem,i;
printf("   Give the First number for the Range :   \n");
scanf("%d",&n);
printf("   Give the Final number for the Range :   \n");
scanf("%d",&m);
printf("\n The Even numbers between %d and %d are ",n,m); 
for(i=n; i<=m; ++i)
{
rem = i % 2;
if(rem == 0)
printf("%d",i);
}
return 0; 
} 
