#include <stdio.h>
int main (void)
{
	int i=1,j=2,k=3,max;
	if (i > j)
	  if (i > k)
	    max = i;
	  else
	    max = k;
	else 
	  if (j > k)
	    max = j;
	  else
	    max = k;
	printf ("%d",max);
	return 0;
}
