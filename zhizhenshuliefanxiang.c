#include <stdio.h>
#define N 10
int main (void)
{
	int a[N],*p;
	printf("������%d�����֣�",N);
	for (p=a;p<a+N;p++)
	  scanf("%d",p);
	printf ("�����Ϊ��");
	for (p=a+N-1;p>=a;p--)
	  printf("%3d",*p);
	return 0; 
	  
	
	
 } 
