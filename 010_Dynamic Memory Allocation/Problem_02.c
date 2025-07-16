#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    // scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d", ptr[i]);
    }

    return 0;
}