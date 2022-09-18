#include <stdio.h>
int main()
{
    int Number, Number1, Remainder, Number2, Array[100], counter = 0, i, choice;

    printf("Which Conversion you want: \n Decimal to Binary (press 1)\n Decimal to Octal (press 2)\n Decimal to Hexadecimal (press 3)\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter decimal Number: ");

        scanf("%d", &Number);

        Number1 = Number;

        for (; Number1 > 0; counter++)
        {
            Number2 = Number1 / 2;

            Remainder = Number1 % 2;

            Array[counter] = Remainder;

            Number1 = Number2;
        }
        printf("Decimal: %d is equal to Binary : ", Number);

        for (i = counter - 1; i >= 0; i--)
        {
            printf("%d", Array[i]);
        }
    }

    else if (choice == 2)
    {
        printf("Enter decimal Number: ");

        scanf("%d", &Number);

        Number1 = Number;

        for (; Number1 > 0; counter++)
        {
            Number2 = Number1 / 8;

            Remainder = Number1 % 8;

            Array[counter] = Remainder;

            Number1 = Number2;
        }

        printf("Decimal: %d is equal to Octal : ", Number);

        for (i = counter - 1; i >= 0; i--)
        {
            printf("%o", Array[i]);
        }
    }

    else if (choice == 3)
    {
        printf("Enter decimal Number: ");

        scanf("%d", &Number);

        Number1 = Number;

        for (; Number1 > 0; counter++)
        {
            Number2 = Number1 / 16;

            Remainder = Number1 % 16;

            Array[counter] = Remainder;

            Number1 = Number2;
        }

        printf("Decimal: %d is equal to Hexadecimal : ", Number);

        for (i = counter - 1; i >= 0; i--)
        {
            printf("%X", Array[i]);
        }
    }
}