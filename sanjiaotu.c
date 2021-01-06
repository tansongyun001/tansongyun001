#include <stdio.h>
int main (void)
{
	int n,i,j,k;
	char zimu;
	scanf ("%d",&n);
	char zimuzu[2*n-1];
	for (i=1;i<=n;i++)
	{
		zimu='A'-1+i;
		for (j=0;j<n-i;j++)
		{
			zimuzu[j]=' ';
		}
		for (j=n-i;j<=n+i-2;j++)
		{
			zimuzu[j]=zimu;
		}
		for (j=n+i-1;j<2*n-2;j++)
		{
			zimuzu[j]=' ';
		}
		for (k=0;k<=2*n-2;k++)
		{
			printf("%c",zimuzu[k]);
		}
		printf("\n");
	}
	return 0;
}
