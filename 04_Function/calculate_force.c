#include <stdio.h>

float force(float mass)
{

    return (mass * 9.8);
}
int main()
{
    float m;
    printf("Enter body weight: \n");
    scanf("%f", &m);
    printf("The force is %f ", force(m));
}