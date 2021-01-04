#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n); 
    for (i = 0; i < n; i++)
	 {
    int a,b,c,d;
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    int num1=a;
    int num2=b;
    int num3=c;
    int num4=d;
    if (a<b){
  num3=b;
  num1=a;}
  else{
  num3=a;
  num1=b;}
  if (c<d){
  num4=d;
  num2=c;}
  else{
  num4=c;
  num2=d;}
  if (num1>num2)
  {int x=num1;
  num1=num2;
  num2=x;}
  if (num3>num4){
  	int y=num4;
  num4=num3;
  num3=y;}
  if (num2>num3){
  	int z=num2;
  	num2=num3;
  	num3=z;
  }
  printf("%d %d %d %d\n",num1,num2,num3,num4);
}
}


