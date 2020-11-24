#include <stdio.h>
#define N 10
int main (void)
{
	printf ("请输入%d个数字：",N);
	int a[N],i;
	for (i = 0 ; i < N ; i++)
	  scanf ("%d",&a[i]);
	printf ("数列反向后为：\n");
	for (i = N-1 ;i >= 0 ;i--)
	  printf ("%d ",a[i]);
	return 0;
}
