#include <stdio.h>
int main (void)
{
	long n,sum=0;
	printf("����һ��������ͳ���\n");
	printf ("����������");
	scanf ("%ld",&n);
	while (n!=0){
		sum += n;
		scanf("%ld",&n);
	} 
	printf("��Ϊ��%ld",sum);
	return 0;
 } 
