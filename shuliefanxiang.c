#include <stdio.h>
#define N 10
int main (void)
{
	printf ("������%d�����֣�",N);
	int a[N],i;
	for (i = 0 ; i < N ; i++)
	  scanf ("%d",&a[i]);
	printf ("���з����Ϊ��\n");
	for (i = N-1 ;i >= 0 ;i--)
	  printf ("%d ",a[i]);
	return 0;
}
