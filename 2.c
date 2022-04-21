/*
 * # # #
 * * # #
 * * * #
 * * * *
 */

#include <stdio.h>

void pattern(int Row, int Col)
{
    for (int i = 1; i <= Row; i++)
    {

        for (int j = 1; j <= Col; j++)
        {

            if (j > i)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{

    int iRow = 0, iCol = 0;
    printf("Please enter the number of rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    pattern(iRow, iCol);

    return 0;
}