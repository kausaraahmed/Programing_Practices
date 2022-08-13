#include <stdio.h>
int main()
{
    int number, number2 , number3, divider, remainder;

    printf("Enter a number : "); 
    scanf("%d", &number);

    printf("Enter the divider : "); 
    scanf("%d", &divider);

    number2 = number / divider; 

    number3= number2*divider;

    remainder= number-number3;    

    printf("The remainder is: %d", remainder);

    return 0;
}