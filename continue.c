#include <stdio.h>
int main (void)
{
	int n,i=1,sum=0;
	printf("����һ����ʮ������ʵ���ĺ͵ĳ���\n");
	for (;i<=10;)
	    {
		printf("������n:");
	    scanf("%d",&n);
	    if (n==0)
	    continue;
	    sum+=n;
	    i++;
	    }
	printf("����ʮ���������ĺ�Ϊ��%d",sum);
}
