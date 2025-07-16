#include <stdio.h>

void printArray(int a[], int x)
{
    // printf("The array is : ");
    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void printReveseArray(int b[], int y)
{
    int temp;
    printf("The reverse array is : ");
    for (int j = 0; j < y / 2; j++)
    {
        temp = b[j];
        b[j] = b[y - j - 1];
        b[y - j - 1] = temp;

        // printf("%d", b[j]);
    }
    printf("\n");
}
int main()
{

    int n;
    printf("Enter numbers of element\n");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index value\n", i);
        scanf("%d", &arr[i]);
    }

    printArray(arr, n);
    printReveseArray(arr, n);
    printArray(arr, n);
    return 0;
}