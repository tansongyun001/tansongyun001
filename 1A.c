#include <stdio.h>
int age(int n,int a,int k)
{
	if (n==1)
	return a;
	else
	return (k+age(n-1,a,k));
}
int main (void)
{
	int n,a,k;
	scanf ("%d %d %d",&n,&a,&k);
	if (n<=0||k>100||k<=0||n<2)
	printf ("Wrong Number\n");
	else
	printf ("%d\n",age(n,a,k));
    return 0;
}
