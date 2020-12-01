#include <stdio.h>
#define N 10
int main (void)
{
	int a[N],*p;
	printf("请输入%d个数字：",N);
	for (p=a;p<a+N;p++)
	  scanf("%d",p);
	printf ("反向后为：");
	for (p=a+N-1;p>=a;p--)
	  printf("%3d",*p);
	return 0; 
	  
	
	
 } 
