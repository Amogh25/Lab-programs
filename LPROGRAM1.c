#include<stdio.h>
#include<math.h>
int main( )
{
float a, b, c, disc, root1, root2, real, imag;
printf("Enter a,b,c values \n");
scanf("%f %f %f",&a, &b, &c);
disc=(b*b)-(4*a*c);
if((a==0) && (b==0))
{
printf("Invalid co-efficients \n");
}
else if(a==0)
{
printf("Linear equation \n");
}
else if(disc==0)
{
printf("The roots are Real and Equal \n");
root1=-b/(2*a);
root2=-b/(2*a);
printf("Root1=%f \t Root2=%f",root1,root2);
}
else if(disc>0)
{
printf("The roots are Real and distinct \n");
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);
printf("Root1=%f\t Root2=%f",root1,root2);
}
else
{
printf("The roots are Real and Imaginary \n");
real=-b/(2*a);
imag=sqrt(fabs(disc))/(2*a);
printf ("Root1=%f + i %f \n", real, imag);
printf ("Root2=%f - i %f \n", real, imag);
}
return 0;
}