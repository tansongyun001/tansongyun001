#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	printf ("���������֣�");
	scanf ("%ld",&n);
	while (n > 0){
		digit = n%10;
		if (digit_seen[digit]==true)
		  break;
		digit_seen[digit]=true;
		n /= 10;
	} 
	if(n==0)printf ("������û���ظ�����\n");
	if(n>0)printf ("���ظ�����:%d\n",digit);
	return 0; 
}
