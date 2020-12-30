#include<stdio.h>
int num(int y)
{
	for (int i=2;i<y;i++)
	{
		int j=0;
		if (y%i!=0)
		  j++;
	}
	if (j==y-2)
	return 1;
	else
	return 0;
}
int main (void)
{
	int k,i,x,m,n=1;
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		scanf("%d",&x);
		int N=0,a[200];
		for (m=2;m<=x;m++)
		{
			if (x%m==0&&num(m)==1)
			  {
			  	a[N]=m;
				N++;	 
			  }
		}
		for (int b=0;b<N;b++)
		{
			printf("%d")
		}
	}
 } 
