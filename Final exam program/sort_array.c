#include <stdio.h>
int main(void)
{
    int arr[10], i, j, length, temp;
    printf("Input array length \n");
    scanf("%d", &length);
    printf("Input numbers: \n");
    for (i=0; i<length; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            if ( arr[i] < arr [j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }

    }
    for (i=0; i<length; i++)
    {
        printf("%d", arr[i]);
    }
}
