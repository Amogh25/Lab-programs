#include<stdio.h>
int main( )
{
int a, b, m, n, r, gcd, lcm;
printf("Enter the value of m and n: ");
scanf("%d %d", &m, &n);
a=m;
b=n;
while(b!=0)
{
r=a%b;
a=b;
b=r;
}
gcd=a;
lcm=(m*n)/gcd;
printf("GCD= %d\t LCM= %d",gcd,lcm);
return 0;
}