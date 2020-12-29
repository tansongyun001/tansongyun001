#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n,i,m,k,j=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m);
		k=m;
		while (m>0)
		{
			j=j*10+m%10;
			m=m/10;
		}
		if (j==k)
		  printf("yes\n");
		else
		  printf("no\n");
		j=0;
	}
	return 0;
}
