#include <stdio.h>
int main (void)
{
	int i,j,k;
	int a[10]={1,2,4,2,5,7,4,3,6,2};
	for (i=0;i<9;i++)
	{
		for (j=0;j<10-i;j++)
		{
			if (a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	    
	}
	for (i=0;i<10;i++)
	    {
	    	printf("%d ",a[i]);
		}
	return 0;
}
