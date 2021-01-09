#include <stdio.h>
int main (void)
{
	int N,i,j=0;
	scanf("%d",&N);
	int a[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		j+=a[i];
	}
	double k=(double)j/N;
	printf("%.2f",k);
	return 0;
}
