#include<stdio.h>
#include<assert.h>
int extGCD(int x, int y, int& a, int& b){
	if(y==0){
		a=1;
		b=0;
	    assert(a*x+b*y==x);
		return x;
	}
	else{
		int at, bt;
		int r=extGCD(y, x%y, at, bt);
		
		a=bt;
		b=at-bt*(x/y);
		assert(a*x+b*y==r);
		return r;		
	}
}
int main()
{
	int a, b;
	int x=12, y=8;
	int r=extGCD(x, y, a, b);
	printf("%d * %d * %d * %d = %d\n",a, x, b, y, r);	
}
