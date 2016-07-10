#include<stdio.h>
void main()
{
int a,num,i,j;
int count=0;
clrscr();
printf("\n Enter value=");
scanf("%d",&a);
num=2*a;
for(i=1;i<num;i++)
{
for(j=i+1;j<=num;j++)
{
printf("(%d,%d)\n",i,j);
count++;
}
}
printf("No of paires =%d",count);
getch();
}
