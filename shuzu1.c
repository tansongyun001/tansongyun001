#include <stdio.h>
#define N 3
int main (void)
{
	int a[N],i;
	printf ("输入%d个数字 :",N+1);
	for (i = 0;i<N;i++)
	  scanf ("%d",&a[i]);
	printf ("倒序后的结果为："); 
	for (i = N;i>=0;i--)
	  printf ("%d",a[i]);
	return 0; 
}
