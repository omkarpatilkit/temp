// odd even

#include <stdio.h>

void checkOddEven(int a)
{

    if (a < 0)
    {
        printf("Please enter a positive number\n");
    }
    else if (a % 2 == 0)
    {
        printf("The number %d is even \n", a);
    }
    else
    {
        printf("The number %d is odd \n", a);
    }
}

int main()
{
    int iVal = 0;
    printf("Please enter a number: ");
    scanf("%d", &iVal);

    checkOddEven(iVal);

    return 0;
}