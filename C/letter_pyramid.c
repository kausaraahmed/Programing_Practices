#include <stdio.h>
int main(void)
{
    int line, i, j, letter = 65;
    printf("Enter the number of line: ");
    scanf("%d", &line);
    for (i = 1; i <= line; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c ", letter + j);
        }
        printf("\n");
    }
}
