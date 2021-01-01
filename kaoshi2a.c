#include <stdio.h>
#include <math.h>
int main (void)
{
	int n,i;
	int a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {scanf("%d %d",&a,&b);
	    printf ("%d\n",a*b);
	  }
	return 0;
}
