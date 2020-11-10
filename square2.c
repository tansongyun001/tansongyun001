#include <stdio.h>
int main (void)
{
	int i,n;
	printf("这是一个平方计算表：\n");
	printf("请输入底数的最大数：");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	  printf("%10d%10d\n",i,i*i);
	return 0; 
}
