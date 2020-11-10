#include <stdio.h>
int main (void)
{
	int n,i=1,sum=0;
	printf("这是一个求十个非零实数的和的程序：\n");
	for (;i<=10;)
	    {
		printf("请输入n:");
	    scanf("%d",&n);
	    if (n==0)
	    continue;
	    sum+=n;
	    i++;
	    }
	printf("则这十个非零数的和为：%d",sum);
}
