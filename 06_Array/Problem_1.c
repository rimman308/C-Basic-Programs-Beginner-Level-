#include <stdio.h>

int main()
{

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = num;

    printf("The value of first element in array is %d\n", *ptr);
    ptr += 2;
    printf("The value of third element in array is %d", *ptr);
    return 0;
}



