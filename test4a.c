#include <stdio.h>
#include <math.h>
int main (void)
{
	int n,i,a,b,c,d1,d2,d3;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	  {
	  	scanf ("%d %d %d",&a,&b,&c);
	  	d1=pow(a,2);
	  	d2=pow(b,2);
	  	d3=pow(c,2);
	  	if ((d1+d2==d3)|| (d1+d3==d2)|| (d2+d3==d1))
	  	{
		 if (a>0&&b>0&&c>0)
		 printf("Yes\n");
		 else 
	  	 printf ("No\n");
	    }
	  	else
	  	printf ("No\n");
	  	
	  }
	  return 0;
}
