// Fibonacci series (for loop)
#include <stdio.h> 
int main()
{
    int n1, n2, lenth, n = 2, output;
    printf("Enter the lenth of fibonacci series: ");
    scanf("%d", &lenth);
    printf("Fibonacci series upto lenth %d is: 0, 1, ", lenth);
    for (n1 = 0, n2 = 1; n < lenth; n++)
    {
        output = n1 + n2;
        n1 = n2;
        n2 = output;
        printf("%d, ", output);
    }
}

// Fibonacci series (while loop)
#include <stdio.h>
int main()
{
    int n1=0, n2=1, n3, count=0, last, last1;
    printf("How many digits to show of Fibonacci series: ");
    scanf("%d", &last);
    last1= last-3;
    printf("Showing %d digits of Fibonacci series: 0, 1, ", last);
    while(count <= last1){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d, ", n3);
        count=count+1;
    }  
}
