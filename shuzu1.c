#include <stdio.h>
#define N 3
int main (void)
{
	int a[N],i;
	printf ("����%d������ :",N+1);
	for (i = 0;i<N;i++)
	  scanf ("%d",&a[i]);
	printf ("�����Ľ��Ϊ��"); 
	for (i = N;i>=0;i--)
	  printf ("%d",a[i]);
	return 0; 
}
