#include<stdio.h>
int main(void)
{
	int a,i=0;
    while (scanf("%d",&a)!=EOF && a>0)
    {
    	if ((a%3)!=0 && (a%5)!=0)
    	i=i+a;
	}
	printf("%d",i);
	return 0;
}
