#include<stdio.h>
int main ()
{
	int a[5],i,j,k,x,y;
	for (x=0;x<5;x++)
	{
	scanf ("%d",&a[x]);}
	for (i=0;i<4;i++)
	 {
	 for (j=0;j<4-i;j++)
	 {
	 	if (a[j]>a[j+1])
	 	{
	 		k=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=k;
		 }
	 }}
	 for (y=0;y<5;y++)
	 
	 {
	 printf("%d ",a[y]);
}
printf("\n");
return 0;
}
