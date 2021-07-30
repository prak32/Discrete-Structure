#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i, num, pos;
    printf("Enter any 10 Numbers:\n ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
	}
    printf("\nEnter a Number to Search:\n ");
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            pos=i;
            break;
        }
    }
    printf("\n!Found at Index No.%d", pos);
    getch();
    return 0;
}
