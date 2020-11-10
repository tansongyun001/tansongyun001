#include <stdio.h>
int main (void)
{
	int d,n;
	printf("这是一个测试数n是否为素数的程序：\n");
	printf("请输入正整数n：");
	scanf("%d",&n);
	for (d=2;d<n;d++)
	  if (n % d == 0)
	    break;
	if (d < n) printf ("n有最小公约数%d\n",d);
	else printf("n为素数\n");
	return 0;
}
