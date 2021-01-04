#include <stdio.h>
int main (void)
{
		int a,b,c,d,e,a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,a3,b3,c3,d3,e3;
		while (scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF && (a!=0||b!=0||c!=0||d!=0||e!=0))
		{
		if(((b-a)==(c-b)&&(c-b)==(d-c)&&(d-c)==(e-d))&&(b/a==c/b&&c/b==d/c&&d/c==e/d)&&(c==a+b && d==b+c && e==c+d))
		   {
		   	a1=e+(b-a);
			b1=a1+(b-a);
			c1=b1+(b-a);
			d1=c1+(b-a);
			e1=d1+(b-a);
			printf("%d %d %d %d %d ",a1,b1,c1,d1,e1);
			a2=e*(b/a);
           	b2=a1*(b/a);
           	c2=b1*(b/a);
           	d2=c1*(b/a);
           	e2=d1*(b/a);
           	printf("%d %d %d %d %d ",a2,b2,c2,d2,e2);
           	a3=e+d;
		   	b3=a1+e;
		   	c3=b1+a1;
		   	d3=c1+b1;
		   	e3=d1+c1;
		   	printf("%d %d %d %d %d ",a3,b3,c3,d3,e3);
		   }
		else if((b/a==c/b&&c/b==d/c&&d/c==e/d)&&(c==a+b && d==b+c && e==c+d))
		   {
		   	a2=e*(b/a);
           	b2=a1*(b/a);
           	c2=b1*(b/a);
           	d2=c1*(b/a);
           	e2=d1*(b/a);
           	printf("%d %d %d %d %d ",a2,b2,c2,d2,e2);
           	a3=e+d;
		   	b3=a1+e;
		   	c3=b1+a1;
		   	d3=c1+b1;
		   	e3=d1+c1;
		   	printf("%d %d %d %d %d ",a3,b3,c3,d3,e3);
		   }
		else if(((b-a)==(c-b)&&(c-b)==(d-c)&&(d-c)==(e-d))&&(c==a+b && d==b+c && e==c+d))
		   {
		   	a1=e+(b-a);
			b1=a1+(b-a);
			c1=b1+(b-a);
			d1=c1+(b-a);
			e1=d1+(b-a);
			printf("%d %d %d %d %d ",a1,b1,c1,d1,e1);
			a3=e+d;
		   	b3=a1+e;
		   	c3=b1+a1;
		   	d3=c1+b1;
		   	e3=d1+c1;
		   	printf("%d %d %d %d %d ",a3,b3,c3,d3,e3);
		   }
		else if(((b-a)==(c-b)&&(c-b)==(d-c)&&(d-c)==(e-d))&&(b/a==c/b&&c/b==d/c&&d/c==e/d))
		   {
		   	a1=e+(b-a);
			b1=a1+(b-a);
			c1=b1+(b-a);
			d1=c1+(b-a);
			e1=d1+(b-a);
			printf("%d %d %d %d %d ",a1,b1,c1,d1,e1);
			a2=e*(b/a);
           	b2=a1*(b/a);
           	c2=b1*(b/a);
           	d2=c1*(b/a);
           	e2=d1*(b/a);
           	printf("%d %d %d %d %d ",a2,b2,c2,d2,e2);
		   }
		else if ((b-a)==(c-b)&&(c-b)==(d-c)&&(d-c)==(e-d))
		   {
			a1=e+(b-a);
			b1=a1+(b-a);
			c1=b1+(b-a);
			d1=c1+(b-a);
			e1=d1+(b-a);
			printf("case one\n");
			printf("%d %d %d %d %d\n",a1,b1,c1,d1,e1);
           }
        else if(b/a==c/b&&c/b==d/c&&d/c==e/d)
           {
           	a2=e*(b/a);
           	b2=a1*(b/a);
           	c2=b1*(b/a);
           	d2=c1*(b/a);
           	e2=d1*(b/a);
           	printf("case two\n");
           	printf("%d %d %d %d %d\n",a2,b2,c2,d2,e2);
		   }
	    else if(c==a+b && d==b+c && e==c+d)
		   {
		   	a3=e+d;
		   	b3=a1+e;
		   	c3=b1+a1;
		   	d3=c1+b1;
		   	e3=d1+c1;
		   	printf("case three\n");
		   	printf("%d %d %d %d %d\n",a3,b3,c3,d3,e3);
		   }
        }
        return 0;
}

