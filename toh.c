#include <stdio.h>
#include<conio.h>
void tower(int, char, char, char);
int main()
{
int n;
scanf("%d", &n);
tower(n, 'A', 'C', 'B');
return 0;
}
//toh 1st funcion
void tower(int n, char frompeg, char topeg, char auxpeg)
{
if (n == 1)
{
printf("\n Move disk one(1) from peg %c to peg %c", frompeg, topeg);
return;
}
//toh 2nd function
tower(n - 1, frompeg, auxpeg, topeg);
printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
tower(n - 1, auxpeg, topeg, frompeg);
}
