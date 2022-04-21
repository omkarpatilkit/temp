#include <stdio.h>
#include <stdlib.h>

void maxOf(int arr[], int size)
{
    int a = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    printf("%d\n", a);
}

int main()
{
    int Len = 0;
    int *Arr = NULL;

    printf("Please enter size of array: ");
    scanf("%d", &Len);

    Arr = (int *)malloc(Len * sizeof(int));
    if (Arr == NULL)
    {
        return -1;
    }

    for (int i = 0; i < Len; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &Arr[i]);
    }
    printf("\n");
    maxOf(Arr, Len);

    return 0;
}