#include <stdio.h>
int main()
{
    int input, temp, remainder, Array[20], count = 0;
    printf("Enter a Decimal Number: ");
    scanf("%d", &input);

    temp = input;

    for (; temp > 0; count++)
    {
        remainder = temp % 2;
        Array[count] = remainder;
        temp = temp / 2;
    }

    printf("Decimal: %d => Binary : ", input);

    for (int i = (count - 1); i >= 0; i--)
    {
        printf("%d", Array[i]);
    }
}