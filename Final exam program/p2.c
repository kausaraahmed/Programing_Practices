#include <stdio.h>
int main()
{
    int n, row, col, letter = 64, num1 = 0, num2 = 1, print;
    printf("Enter a Row: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
            printf(" ");
        for (col = 1; col <= 2 * row - 1; col++)
        // printf("%c ", letter + col);
        {
            for (int i = 0; i < col; i++)
            {
                print = num1 + num2;
                printf("%d, ", print);
                num1 = num2;
                num2 = print;
            }
        }
    }
}