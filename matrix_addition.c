#include<stdio.h>
void main()
{
int A[10][10],B[10][10],C[10][10];
int i,j,Arow,Brow,Crow,Acol,Bcol,Ccol;

printf("Enter the rows ad columns of matrix A\n ");
scanf("%d%d",&Arow,&Acol);
   
printf("Matrix A:\n");
for(i=0;i<Arow;i++)
{
for(j=0;j<Acol;j++)
{
//scanf("%d",&A[i][j]);
    A[i][j]=rand()%10;
    printf("%d\t",A[i][j]);
}
    printf("\n");
}
    
    printf("Enter the rows ad columns of matrix B \n");
scanf("%d%d",&Brow,&Bcol);
printf("Matrix B:\n");
for(i=0;i<Brow;i++)
{
for(j=0;j<Bcol;j++)
{
//scanf("%d",&B[i][j]);
B[i][j]=rand()%10;
    printf("%d\t",B[i][j]);
}
    printf("\n");
}
    
    if(Arow==Brow && Acol==Bcol)
{
printf("Matrix C :\n");
for(i=0;i<Arow;i++)
{
for(j=0;j<Acol;j++)
{
C[i][j]=A[i][j]+B[i][j];
printf("%d\t",C[i][j]);
}
printf("\n");
}
}
else
    printf("Matrix addition not possible");
}
