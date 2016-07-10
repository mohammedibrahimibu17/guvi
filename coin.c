#include<stdio.h>
void main(){
int num,i,j;
printf("Enter the number");
scanf("%d",&num);
if(num<3)
printf("%d",num);
if(num<5 && num>=3)
{
i=num%3+num/3;
printf("%d",i);
}
if(num>=5)
{
j=num%5+num/5;
printf("%d",j);
}
}
