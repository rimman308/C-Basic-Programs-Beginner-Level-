#include <stdio.h>

float result(float cel_temp)
{
    return (cel_temp * 9 / 5) + 32;
}

int main()
{
    float celsius;
    printf("Enter celsius temparature:\n");
    scanf("%f", &celsius);
    printf("The fahrenheit teparature is %f", result(celsius));

    return 0;
}