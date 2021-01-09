#include <stdio.h>
#include <string.h>
int main (void)
{
	int i,j,len1,len2;
	char a[1000],b[1000];
	for (i=0;i<1000;i++)
	{ 
         fgets (a,1000,stdin);
		 len1 = strlen(a)-1;
         b[i] = a[len1];
         for (i=0;i<len1/2;i++)
         {
         	int k=a[i];
			a[i]=a[len1-i-1];
			a[len1-i-1]=k;
		 }
	
	}
	for (i=0;i<1000;i++)
	{
		printf("%s ",b[i]);
	}
	return 0;
}
