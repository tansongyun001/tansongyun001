#include <stdio.h>
int main (void)
{
	int d,n;
	printf("����һ��������n�Ƿ�Ϊ�����ĳ���\n");
	printf("������������n��");
	scanf("%d",&n);
	for (d=2;d<n;d++)
	  if (n % d == 0)
	    break;
	if (d < n) printf ("n����С��Լ��%d\n",d);
	else printf("nΪ����\n");
	return 0;
}
