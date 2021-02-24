#include <stdio.h>
#include <math.h>
 
int main()
{
	float val;
	float fVal,cVal;
 
	printf("Enter a float value: ");
	scanf("%f",&val);
 
	fVal=floor(val);
	cVal =ceil(val);
	printf("Floor value:%.4f \nCeil value:%.4f\n",fVal,cVal);
	return 0;
}


