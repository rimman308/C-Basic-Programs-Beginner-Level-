//

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    int arr[10]; 

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("The value of %d x %d = %d\n", n, j + 1, arr[j]);
    }

    return 0;
}