#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	if (n<10&&n>0)
	{
	for (i=0;i<n;i++)
	{
		char a[101]; 
		int j,k,l=0;
		fgets(a,101,stdin);
		for(j=0;j<98;j++)
		{
			if (a[j]=="S"&&a[j+1]=="C"&&a[j+2]=="U")
			  {
			  	if(j==0)
			  	printf("YES\n");
				else
				{
				for (k=0;k<j;k++)
			  	 {
			  	 	if (a[j-1-k]=a[j+3+k]&&a[j-1-k]=="A"&&a[j+3+k]=="A")
			  	 	l++;
				   }
				if (l==j)
				printf("YES\n");
			    }
			  }
			else
			printf("NO\n");
		 } 
		
	}
    }
}
