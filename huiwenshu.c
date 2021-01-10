#include <stdio.h>
int main (void)
{
	int n,i,m;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m);
		int k=0;
		int x=m;
		if(m>0)
		{
			while (m>0)
			{
			    k=k*10+m%10;
				m=m/10;	
			}
		}
		if (k==x)
			printf("yes\n");
		else
		    printf("no\n");
	}
	return 0;
}
