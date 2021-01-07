#include <stdio.h>
int main (void)
{
	int n,i,x,j=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		int *;
		while(scanf ("%d",&a)!=EOF)
			{
			for (i=0;i<10;i++)
			{
			if (a[i]!=0)
			  {
				j++;
			  }
		    }
		for (i=0;i<j-1;i++)
		{
			for (k=0;k<j-i;k++)
			{
				if(a[k]>a[k+1])
				{
					x=a[k];
					a[k]=a[k+1];
					a[k+1]=x;
				}
			}
		}
		
		for (i=0;i<j;i++)
		{
			if (a[i]%2 != 0)
			printf("%d ",a[i]);
		}
		for (i=0;i<j;i++)
		{
			if (a[i]%2 == 0)
			{
				printf ("%d ",a[i]);
			}
		}
		printf ("\n");
	}}
	return 0;
}
