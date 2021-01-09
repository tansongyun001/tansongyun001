#include <stdio.h>
#include <string.h>
int main (void)
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		char a[200];
		gets(a);
		int len=strlen(a)-1;
			if(len<3||(len%2)==0)
			  printf("NO");
			else if (len==3&&a[0]=='S'&&a[1]=='C'&&a[2]=='U')
			  printf("YES");
			else{
			  for(i=0;i<len;i++)
		{
		
			if (a[i]=='S'&&a[i+1]=='C'&&a[i+2]=='U')
			{
				for(j=0;j<i;j++)
				{
					if((a[j]==a[len-1-j])&&(a[j]=='A'))
					k++;
				}
				if (k==i)
			    	printf("YES\n");
			    else
			        printf("NO\n");
			}}
			
		}
	}
	return 0;
}
