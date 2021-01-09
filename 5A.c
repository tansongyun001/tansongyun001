#include <stdio.h>
#include <string.h>
int main (void)
{
	int n,i,j=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		char a[200];
		fgets(a,200,stdin);
		int len=strlen(a)-1;
		for (i=0;i<len;i++)
		{
			if (a[i]=a[len-1-i])
			  j++;	
		}
		if (j==len)
		 printf("yes\n");
		else
		 printf("no\n");
	}
	return 0;
}
