#include <stdio.h>
int main() {
	int n;
	int a;
	int i;
	int sum=0;
	printf("请输入a和n:");
	scanf_s("%d %d", &a, &n);
	if(a<=0||n<=0)
		printf("error!!!");
	else {
		for (i = 0; i < n; i++) {
			sum += a;
			a += 2 * pow(10,i+1);
		}
		printf("总和为%d", sum);
	}
	return 0;
}

