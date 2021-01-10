#include<stdio.h>
int main (void)
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	int a[m],b[n];
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[m+n];
	for (i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for (i=m;i<m+n;i++)
	{
		c[i]=b[i-m];
	}
	for (i=0;i<m+n-1;i++)
	{
		for (j=0;j<m+n-i;j++)
		{
			if (c[j]>c[j+1])
			{
			k=c[j];
			c[j]=c[j+1];
			c[j+1]=k;
		    }
		}
	}
	if (a[1]>=a[0])
	{
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}}
	else
	{
		for (i=m+n-1;i>=0;i--)
		{
			printf("%d ",c[i]);
		}
	}
	
}
