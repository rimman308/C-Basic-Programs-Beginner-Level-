#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    // scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c
    for (int i = 0; i < n; i++)
    {

        ptr[i] = 7 * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d\n", ptr[i]);
    }
    n = 15;
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    for (int i = 0; i < 15; i++)
    {

        printf("%d\n", ptr[i]);
    }

    return 0;
}