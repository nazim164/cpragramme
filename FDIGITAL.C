#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int n,result;
clrscr();
printf("enter a no\n");
scanf("%d",&n);
result=sum(n);
printf("digital sum is =%d\n",result);
}
int sum(int n)
{
int dm=0;
while(n>0)
{
dm+=n%10;
n/=10;
}
return dm;
}