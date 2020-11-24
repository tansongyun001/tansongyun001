#include <stdio.h>
int main (void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n,i,length;
	n=sizeof(a);
	i=sizeof(a[2]);
	length=sizeof (a)/sizeof(a[3]);
	printf ("%d %d %d",n,i,length);
	return 0;
}
