#include<stdio.h>
void main()
{
int num,i,count;
printf("enter the number:\t");
//scanf("%d",&num);
    num=13;
for(i=2;i<num/2;i++)
{
if(num%i==0){
    count++;}
}
if(count>0){printf("it is a prime number");}
else
printf("not a prime number");
}
