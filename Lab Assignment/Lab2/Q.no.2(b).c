#include <stdio.h>
int main()
{
 
    long binary1, binary2;
    int i = 0, remainder = 0, sub[20];
 
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sub[i++] =(binary1 % 10 - binary2 % 10 - remainder) % 2;
        remainder =(binary1 % 10 - binary2 % 10 - remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sub[i++] = remainder;
    --i;
    printf("Subtraction of two binary numbers: ");
    while (i >= 0)
        printf("%d", sub[i--]);
    return 0;
}
