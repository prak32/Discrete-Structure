#include <stdio.h>
void binout_helper(int in, int left) 
{
	if (left == 0) return;
  	binout_helper(in >> 1, left - 1);
 	printf("%d",in & 1);
}
void binout(int in) 
{
	binout_helper(in,8);
}

void print_status(int Q,int A, int M) 
{
  	printf("Q:%3d, A:%3d, M:%3d  [",A,Q,M);
  	binout(A); printf(" ");
  	binout(Q); printf("]\n");
}

int main() 
{
  	unsigned char dividend = 12;
  	unsigned char divisor = 5;

 	unsigned char A = 0;
  	unsigned char Q = dividend;
  	unsigned char M = divisor;

  	print_status(Q,A,M);

  	for (int i = 0; i < 8; i++) 
	{
		int AQ = (A << 8) + Q;
    	AQ <<= 1;
    	A = (AQ >> 8) & 0xFF;
    	Q = AQ & 0xFF;

    	A -= M;

    if (A & (1 << 7)) 
	{
      	Q &= ~1;
      	A += M;
    }
	else 
	{
    	Q |= 1;
    }

    print_status(Q,A,M);
  }

  unsigned char quotient = Q;
  unsigned char remainder = A;

  printf("Quotient = %d\n" ,quotient);
  printf("Remainder = %d\n",remainder);
  return 0;
}
