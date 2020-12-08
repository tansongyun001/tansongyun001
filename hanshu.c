#include <stdio.h>
double average(double a,double b);
double average(double a,double b)
{
	return (a+b)/2;
}
int main(void)
{double a=1.0,b=2.0;
printf("%.1f",average(a,b));return 0;
}
