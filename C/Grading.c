#include <stdio.h>
int main(void)
{
    double marks;
    printf("Enter your marks: ");
    scanf("%lf", &marks);
    if (marks <= 100 && marks >= 0)
    {

        if (marks >= 85 && marks <= 100)
        {
            printf("Your grade is A");
        }
        else if (marks >= 80 && marks <= 84)
        {
            printf("Your grade is A-");
        }
        else if (marks >= 75 && marks <= 79)
        {
            printf("Your grade is B+");
        }
        else if (marks >= 70 && marks <= 74)
        {
            printf("Your grade is B");
        }
        else if (marks >= 65 && marks <= 69)
        {
            printf("Your grade is B-");
        }
        else if (marks >= 60 && marks <= 64)
        {
            printf("Your grade is C+");
        }
        else if (marks >= 55 && marks <= 59)
        {
            printf("Your grade is C");
        }
        else if (marks >= 50 && marks <= 54)
        {
            printf("Your grade is C-");
        }
        else
            printf("Your grade is F");
    }
    else
        printf("Invalid number!!!");
}
