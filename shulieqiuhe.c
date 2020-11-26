#include <stdio.h>
int main (void)
{
	long n,sum=0;
	printf("这是一个数列求和程序：\n");
	printf ("输入整数：");
	scanf ("%ld",&n);
	while (n!=0){
		sum += n;
		scanf("%ld",&n);
	} 
	printf("和为：%ld",sum);
	return 0;
 } 
