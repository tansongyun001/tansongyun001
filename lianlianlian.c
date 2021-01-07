#include <stdio.h>
int main (void)
{
	int i,a[100],j=0;
	for (i=0;i<100;i++)
	{
		scanf ("%d",&a[i]);
		if (a[i]==0)
		break;
	}
	for (i=0;i<100;i++)
	{
		if (a[i]!=0)
		{
			j++;
		}
	
	}printf("%d",j);
	return 0;
}
