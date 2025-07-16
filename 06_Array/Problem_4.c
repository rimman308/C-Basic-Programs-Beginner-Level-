#include <stdio.h>

int positiveNumber(int a[], int x)
{
    int no_positive_integer = 0;
    for (int i = 0; i <x ; i++)
    {
        if (a[i]>0)
        {
            no_positive_integer++;
        }
        
        
    }
    return no_positive_integer;
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

    printf("The no of positive interger in array is : %d", positiveNumber(arr, n));

    return 0;
}