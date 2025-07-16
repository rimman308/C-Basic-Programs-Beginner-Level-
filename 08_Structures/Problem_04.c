#include <stdio.h>

struct complex
{
    float real;
    float img;
};


int main(){
    
    struct complex c1;

    c1.real=4;
    c1.img=3;

    printf(" %.1f + %.1fi \n",c1.real,c1.img);
    

    return 0;
}