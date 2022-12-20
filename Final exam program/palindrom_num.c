#include <stdio.h>
int main(void)
{
    int temp = 0, rem, num, print;
    printf("Enter number: ");
    scanf("%d", &num);
    print = num;
    while (num != 0)
    {
        rem = num % 10;
        temp = temp * 10 + rem;
        num /= 10;
    }
    if (print == temp)
        printf("%d is a palindrom.", print);
    else
        printf("%d is not a Palindrom.", print);
}
