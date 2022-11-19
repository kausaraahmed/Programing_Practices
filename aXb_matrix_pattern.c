// (a X b) size 2D matrix pattern 
#include <stdio.h>
int main(void)
{
    int row, column;
    printf("Enter Number of row: ");
    scanf("%d", &row);
    printf("Enter Number of column: ");
    scanf("%d", &column);
    printf("\n");

    for (int y = 0; y < column; y++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int x = 0; x < row; x++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("$");
                }
                printf("\t");
            }
            printf("\n");
        }
        printf("\n");
        printf("\n");
    }
}