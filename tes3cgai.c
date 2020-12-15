#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,c,d,e=0;
    scanf("%d",&a);
    for(b=0;b<a;b++)
	{
      scanf("%d",&c);
      d=c;
      while (d>0) 
       {
         e=e*10+d%10;
         d=d/10;
       }
       if(e==c)
        printf("Yes\n");
       else
        printf("No\n");
        e=0;
	}
    return 0;
}
