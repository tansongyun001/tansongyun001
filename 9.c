#include <stdio.h>
int main(void)
{
	printf("请输入半期考试科目序号进行考试时间查询（数学1，英语2）：");
	int n;
	scanf("%d",&n);
	if (n==1)
	  printf("数学考试时间为周日上午10:30-12:00\n");
	else if (n==2)
	  printf("英语考试时间为周六上午10:30-12:30\n");
	else
	  printf("你输入的考试科目无效"); 
    return 0;
	 
}

