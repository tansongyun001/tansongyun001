#include<stdio.h>
int main (void)
{
	int n,i,a[100],b[100],c[100];
	scanf("%d",n);
	for (i=0;i<n;i++)
	{
		for (i=0;i<1000;i++)
		{
		scanf("%d",&a[i]);
	    }
	    int j=0,*b,*c,*d,k,e=0;
	    for (i=0;i<1000;i++)
		{
			if (a[i]!=0)
			e++;
		 } 
		 for (i=0;i<e-1;i++)
		   for(j=i+1;j<e;j++)
		   {
		   	if(a[i]>a[j])
		   	{
		   		k=a[i];
		   		a[i]=a[j];
		   		a[j]=k;
			   }
		   }
	    for (i=0;i<e;i++)
	    {
	    	if(a[i]/2 != 0)
	    	b[i]=a[i];
	    	else if(a[i]/2==0&&a[i]!=0)
	    	c[i]=a[i];
		}
        printf("%d ",b[e]);
        printf("%d ",c[e]);
		}
	return 0;
}
