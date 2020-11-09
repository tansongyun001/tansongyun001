#include <stdio.h>

int main(void) 
{
  int x,y,a,b,c,d,e,f;
  printf("请输入二元一次方程组的系数:\n");
  scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
  x=(b*f-c*e)/(b*d-a*e);

  printf("x=%d\n",x);
  return 0;
}
