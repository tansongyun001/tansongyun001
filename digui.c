#include <stdio.h>
int fact(int n)
{
	if (n<=1)
	  return 1;
	else
	  return n*fact(n-1);
}
int main (void)
{
	int n=3;
	printf("%d",fact(n));
	return 0;
}
