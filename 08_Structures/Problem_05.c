#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} Complex;

void display(Complex c)
{
    printf("The value of Complex number is %d + %di \n", c.real, c.imaginary);
}
int main()
{
    Complex arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &arr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &arr[i].imaginary);
        display(arr[i]);
    }

    return 0;
}