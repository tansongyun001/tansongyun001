#include <stdio.h>
int main (void)
{
	int i,*p;
	p=&i;
	i=1;
	printf("%d\n",i);
	printf("%d\n",*p);
	*p=2;
	printf("%d\n",i);
	printf("%d\n",*p); 
	return 0;
}
