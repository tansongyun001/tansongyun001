#include <stdio.h>
int main (void)
{
	char a[];
	int i,n=0;
	for (i=0;i<1000;i++)
	{
		scanf("%c\n",&a[i]);
		if (a[i]!=0)
		  n++;
	}
	printf("%d",n);
	return 0;
}
