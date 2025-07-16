#include <stdio.h>
int main()
{
    // int i = 72;
    // int *j = &i; // j is a pointer pointing to i (j is a integer pointer)

    // char x = 'A';
    // char *y = &x; // y is a charecter pointer pointing to x

    // float a = 5.4555;
    // float *b = &a; // b is a float pointer pointing to a

    // printf("The address of i is %p\n", &i);
    // printf("The address of i is %p\n", j);

    // printf("The address of j is %p\n", &j);

    // printf("The value of address j is %d\n", *(&i)); // shows the value stored in i
    // printf("The value of address j is %d\n", *(&j)); // shows the value stored in j

    int i = 6;
    int *j = &i;
    int **k = &j; // pointer to pointer

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0;
}