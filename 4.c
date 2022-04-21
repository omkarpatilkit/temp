// reverse the number;

#include <stdio.h>

void reverse(int num)
{

    int iDigit = 0;
    int a = num;
    while (a != 0)
    {

        iDigit = a % 10;
        a = a / 10;
        printf("%d ", iDigit);
    }
    printf("\n");
}

void revNumber(int num)
{

    int iDigit = 0; //
    int a = num;
    int finalNumber = 0;

    while (a != 0)
    {

        iDigit = a % 10;
        a = a / 10;

        finalNumber = finalNumber * 10 + iDigit;
    }
    printf("Final number: %d \n", finalNumber);
}

int main()
{

    int iVal = 0;
    printf("Please enter a numebr: ");
    scanf("%d", &iVal);

    reverse(iVal);
    revNumber(iVal);
    return 0;
}