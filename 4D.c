#include<stdio.h>
#include<string.h>
int main (void)
{
	char a[1000];
	fgets(a,1000,stdin);
	int len=strlen(a)-1;
	printf("%d",len);
	return 0;
}
