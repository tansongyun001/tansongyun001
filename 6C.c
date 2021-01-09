#include <stdio.h>
int main (void)
{
	int N,i;
	scanf("%d",&N);
	int a[N];
	int j=0;
	for (i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<N;i++)
	{
		if (a[i]>0&&a[i]<10)
		j++;
	}
	if (j==0)
	{
		printf("n/a \n");
	}
	else
	{
	
	int b[j];
	int k=0;
	for (i=0;i<N;i++)
	{
		if (a[i]>0&&a[i]<10)
		{
		  b[k]=a[i];
		  k++;
	    }
	}
	int sum=0;
	for (i=0;i<j;i++)
	{
		sum=sum+b[i];
	}
	double average=(double)sum/j;
	printf("%.2f\n",average);
 } 
 
 }
