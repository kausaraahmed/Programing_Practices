#include<stdio.h>

int main() 
{
   int row, col, n, first = 0, second = 1, sum = 1;
   printf("Enter a row: ");
   scanf("%d", &n);

   for (row = 1; row <= n; row++) {
        for(col=1;col<=n-row; col++)
            printf(" ");
        for (col = 1; col <= row; col++) {
         if (row == 1 && col == 1) {
            printf("0");
            continue;
         }
         printf("%d\t", sum);

         sum = first + second;
         first = second;
         second = sum;
      }
      printf("\n");
   }
}