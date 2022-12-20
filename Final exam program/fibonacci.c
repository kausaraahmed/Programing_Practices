#include <stdio.h>
int main()
{
    int num1=0, num2=1, length, i, print;
    printf("Enter length of fibonacci series: ");
    scanf("%d", &length);
    printf("0, 1, ");
    for (i=0; i<length-2; i++)
    {
        print = num1 + num2;
        printf("%d, ", print);
        num1 = num2;
        num2 = print;
    }
}
