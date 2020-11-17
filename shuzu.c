#include <stdio.h>
#define N 10
int main (void)
{
	int a[N],i;
	for (i = 0 ; i <= N ; i++)
	  a[i]=i;
	printf ("%d",a[5]);
	return 0;
}
