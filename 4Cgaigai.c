#include <stdio.h>
#include <string.h>
int main (void)
{
	int n,i,j;
	scanf ("%d",&n);
	char a[200],k,x;
	for (i=0;i<n;i++)
	{
		fgets(a,200,stdin);
	    j=strlen(a)-1;
		for (i=0;i<j-1;i++)
		{
			for (k=0;k<j-i;k++)
			{
				if (a[k]>a[k+1])
				{
					x=a[k];
					a[k]=a[k+1];
					a[k+1]=x;
				}
			}
		}
		for (i=0;i<j;i++)
		{
			if ((a[i]%2) != 0)
			{
				printf ("%c ",a[i]);
			}
		}
		for (i=0;i<j;i++)
		{
			if ((a[i]%2) == 0)
			{
				printf ("%c ",a[i]);
			}
		}
	}
	return 0;
 } 
