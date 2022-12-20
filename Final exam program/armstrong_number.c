#include <stdio.h>
int count(int a);
int main(void)
{
    int num, n, rem, i, order, print=1, temp=0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    order = count(num);
    n=num;
    while (n != 0)
    {
        rem = n % 10;
        for (i=0; i<order; i++)
        {
            print = print * rem;
        }
        temp = temp + print;
        n = n / 10;
    }
    if (temp == num)
    {
        printf("%d is Armstrong number.", num);
    }
    else
    {
        printf("%d is not a Armstrong number.", num);
    }
}

int count(int a)
{
    int c=0;
    while (a != 0)
    {
        a = a / 10;
        c++;
    }
    return c;
}