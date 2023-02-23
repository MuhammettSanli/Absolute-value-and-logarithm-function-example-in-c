#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	double number,result1,result2;
	printf("Write a number");
	scanf("%lf",&number);
	result1=fabs(number);
	result2=log(number);
	printf("Absolute value of the written number= %.3f \n",result1);
	if(number>=1)
	{
	
	printf("The value of the written number in the natural logarithm function= %.3lf",result2);
}
	
	
	return 0;
}
