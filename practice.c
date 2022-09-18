#include <stdio.h>
int main()
{
    int choose, line;
    printf("choose- \n 0 for triangular star pattern and \n 1 for reversed triangular star pattern \n =>");
    scanf("%d", &choose);

    if (choose == 0)
    {
        printf("Enter the number of pattern line: ");
        scanf("%d", &line);
        for (int i = 1; i <= line; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("$");
            }
            printf("\n");
        }
    }

    else if (choose == 1)
    {
        printf("Enter the number of pattern line: ");
        scanf("%d", &line);
        for (; line > 0; line--)
        {
            for (int j = line; j > 0; j--)
            {
                printf("$");
            }
            printf("\n");
        }
    }

    else
    {
        printf("Choose options correctly");
    }
}
