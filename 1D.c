#include <stdio.h>
int max(int a[100])
{
	int m,n=a[0];
	for(m=1;m<100;m++)
	{
		if (n>=a[m])
		  n=n;
		else
		  n=a[m];
	 } 
	return n;
}
int min(int b[100])
{
	int m,n=b[0];
	for (m=0;m<100;m++)
	{
		if (n<=b[m])
		n=n;
		else
		n=b[m];
		
	}
	return n;
}
int main (void)
{
	int n,i;
	scanf("%d",&n);
	char name[n];
	long int num[n];
	int grade[n];
	for (i=0;i<n;i++)
	{
	  scanf("%c %ld %d",&name[i],&num[i],&grade[i]);	
	}
	for (i=0;i<n;i++)
	{
		if (grade[i]==max(grade[n]))
		printf("%c %ld",name[i],num[i]);
	}
	for (i=0;i<n;i++)
	{
		if (grade[i]==min(grade[n]))
		printf("%c %ld",name[i],num[i]);
	}
	return 0;
}
