#include <stdio.h>

struct vector2d
{
    int a;
    int b;
};


int main(){
    
    struct vector2d v1;

    v1.a=5;
    v1.b=6;

    printf(" %d %d \n",v1.a , v1.b);
    
    

    return 0;
}