#include<stdio.h>
int main (void) 
{
	int a[5]={1,2,3,4,5};
	int *p,*q;
	p=&a[0];
	q=p+2;
	q-=1; 
	printf("%10d%10d",*p,*q);
	return 0;
	
}
