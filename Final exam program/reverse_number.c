#include <stdio.h>
int main(void)
{
    int num, print, count=0, i=0, remainder, temp =0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num !=0)
    {
        remainder = num % 10;
        temp = temp * 10 + remainder;
        num /=10;

    }
        printf("%d", temp);
}
