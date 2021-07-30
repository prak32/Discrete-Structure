#include<stdio.h>
#include<stdbool.h>
bool ifThen(bool a, bool b)
{
    if( b == 1)
            return 1;
        else if( a == 0 )
            return 1;
        else
            return 0;
}

int main()
{
    printf(" The argument is as: \n\
        I will buy a new goat or a used Yugo.\n\
        If I buy both a new goat and a used Yugo, I will need a loan.\n\
        I bought a used Yugo and I don't need a loan.\n\
        Therefore, I didn't buy a new goat.\n");

    printf("\n\
        Let, p = I will buy a new goat\n\
             q = I will buy a used Yugo\n\
             r = I will need a loan\n");

    printf("According to argument\n\
        p v q \n\
        (p n q) -> r\n\
        q n !r\n\
        -------------\n\
        i.e !p\n\n");
    
    bool p[] = {0, 0, 0, 0, 1, 1, 1, 1};
    bool q[] = {0, 0, 1, 1, 0, 0, 1, 1};
    bool r[] = {0, 1, 0, 1, 0, 1, 0, 1};

    printf("\t\t\t __________________________________________________________________________\n");
    printf("\t\t\t|   p   |   q   |   r   |   !r  | p v q  | (p n q) -> r| (q n !r)  |   !p  |\n");
    printf("\t\t\t|_______|_______|_______|_______|________|_____________|___________|_______|\n");
    
    for (int i = 0; i < 8; i++)
    {
        bool a = p[i] || q[i];
        bool b = ifThen((p[i] && q[i]), r[i]);
        bool c = q[i] && !r[i];
        bool d = !p[i];

        printf("\t\t\t|   %d   |   %d   |   %d   |   %d   |    %d   |       %d     |     %d     |   %d   |\n", p[i], q[i], r[i], !r[i], a, b, c, d);
    }
        printf("\t\t\t|_______|_______|_______|_______|________|_____________|___________|_______|\n");
}

