#include <stdio.h>
#include <math.h>
int main()
{
	int m,i,a[20],b;
	scanf ("%d",&m);
	  for (i=0;i<m;i++)
	    {
		scanf("%d",&a[i]);
	    }
		b=a[0];
	  for (i=1;i<m;i++)
	    {
	    if (abs(b)<abs(a[i]))
	      b=a[i];
		}
		printf("%d",b);
        return 0;
}
