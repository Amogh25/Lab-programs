#include<stdio.h>
void read(int M[10][10],int row,int col);
void display(int M[10][10],int row,int col);
void mul(int X[10][10],int Y[10][10], int Z[10][10],int row1, int col1, int row2, int col2);
int main()
{
int A[10][10],B[10][10],C[10][10],m,n,p,q,k;
printf("Enter the size of matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter the size of matrix B:\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("Matrix multiplication is not Possible\n");
}
else
{
printf("Enter the elements of matrix A:\n");
read(A,m,n);
printf("Enter the elements of matrix B:\n");
read(B,p,q);
mul(A,B,C,m,n,p,q);
printf("The product of two matrices are\n");
display(C,m,q);
}
return 0;
}
void read(int M[10][10],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&M[i][j]);
}
}
}
void display(int M[10][10],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",M[i][j]);
}
}
printf("\n");
}
void mul(int X[10][10],int Y[10][10], int Z[10][10],int row1, int col1, int row2, int col2)
{
int i,j,k;
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
Z[i][j]=0;
for(k=0;k<col1;k++)
{
Z[i][j]=Z[i][j]+X[i][k]*Y[k][j];
}
}
}
}