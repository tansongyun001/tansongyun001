#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	printf ("请输入数字：");
	scanf ("%ld",&n);
	while (n > 0){
		digit = n%10;
		if (digit_seen[digit]==true)
		  break;
		digit_seen[digit]=true;
		n /= 10;
	} 
	if(n==0)printf ("该数字没有重复数字\n");
	if(n>0)printf ("有重复数字:%d\n",digit);
	return 0; 
}
