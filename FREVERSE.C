#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
int n;
clrscr();
printf("enter a no\n");
scanf("%d",&n);
reverse(n);
getch();
}
int reverse(int n)
{
while(n>0)
{
printf("%d",n%10);
n/=10;
}
return n;
}








