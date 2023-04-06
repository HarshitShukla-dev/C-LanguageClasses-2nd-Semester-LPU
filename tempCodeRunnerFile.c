#include <stdio.h>

void main()
{
    int myArray[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of myArray[%d][%d]: ", i, j);
            scanf("%d", &myArray[i][j]);
        }
    }
    printf("\nPrinting the element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}