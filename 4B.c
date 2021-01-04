#include<stdio.h>
#include <math.h>
int main (void)
{
	int T,i;
	scanf("%d",&T);
	for (i=0;i<T;i++)
	{
		int m,n,j,k=0;
		scanf("%d %d",&m,&n);
		if (m>=100&&m<=n&&n<=999)
		{
			for (j=m;j<=n;j++)
			{
				int baiwei,shiwei,gewei;
				baiwei=j/100;
				shiwei=j/10-baiwei*10;
				gewei=j%10;
				if (j==pow(baiwei,3)+pow(shiwei,3)+pow(gewei,3))
				  {
				  printf("%d ",j);
	              k++;
				  }
			}
			if (k==0)
			 printf("-1\n");
		}
	}
}
