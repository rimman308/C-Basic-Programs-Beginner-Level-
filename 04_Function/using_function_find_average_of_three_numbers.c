#include <stdio.h>

float result(int num1, int num2, int num3)
{
    return ((num1 + num2 + num3) / 3.0);
}

int main()
{
    int a, b, c;
    printf("Enter the first number :\n");
    scanf("%d",&a);
    printf("Enter the second number :\n");
    scanf("%d",&b);
    printf("Enter the third number :\n");
    scanf("%d",&c);
    printf("The average is %f", result(a, b, c));

    return 0;
}