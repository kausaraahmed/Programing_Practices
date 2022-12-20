#include <stdio.h>
int main(void)
{
    int str[10], num, print, count=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num !=0)
    {
        str[i] = num % 10;
        num /=10;
        count++;
        i++;
    }
    for (i = 0; i<count; i++)
    {
        printf("%d", str[i]);
    }
}
