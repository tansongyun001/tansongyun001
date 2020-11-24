#include <stdio.h>
int main (void)
{
	int a[10] = {1,2,3,4,5,6,7};
	printf ("%d\n",a[9]);
	int b[10] = {0};
	printf ("%d\n",b[5]);
	int c[] = {1,2,3,4,5,6,7,8,9,10};
	printf ("%d\n",c[9]);
	int d[200] = {[2] = 1 , [3] = 2};
	printf ("%d\n%d",d[2],d[5]);
	return 0;
}
