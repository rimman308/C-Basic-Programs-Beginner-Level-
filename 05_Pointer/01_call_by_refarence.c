#include <stdio.h>

int sum(int *a, int *b)
{
    *a = 6;
    return *a + *b;
}
int main()
{
    int x = 1, y = 6;
    printf("The sum is %d\n", sum(&x, &y)); // it sends the address of x and y so it can change the value of x
    printf("The value of x is %d\n", x);
}


//code of swapping two numbers


// #include <stdio.h>

// void swap(int* a, int* b);

// void swap(int* a, int* b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 4, b = 6;
//     swap(&a, &b);
//     printf("The value of a is %d and the value of b is %d", a, b);
//     return 0;
// }