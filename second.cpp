#include <stdio.h>
int main(void){
	int height,length,width,volume,weight;
	height=6;
	length=8;
	width=10;
	volume=height*width*length;
	weight=(volume+165)/166;
	printf("Dimensions:%dx%dx%d\n",length,height,width);
	printf("Volume(cubic inches):%d\n",volume);
	
	return 0;
} 
