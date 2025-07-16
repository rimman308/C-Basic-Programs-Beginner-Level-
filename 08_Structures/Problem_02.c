#include <stdio.h>

typedef struct vector2d
{
    int x;
    int y;
} V;

V sumVector(V v1, V v2)
{
    V v3 = {(v1.x + v2.x), (v1.y + v2.y)};
    return v3;
};

int main()
{

    V v1 = {5, 6};
    V v2 = {5, 14};
    V v3 = sumVector(v1, v2);

    printf("The value of v3 is %d x + %d y\n", v3.x, v3.y);

    return 0;
}