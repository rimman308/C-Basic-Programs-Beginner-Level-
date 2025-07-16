#include<stdio.h>

int fibonacci(int n){
    if( n==1 || n==2 ){
        return n-1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int a;
    printf("Enter no \n");
    scanf("%d",&a);
    printf("The value of fibonacci series at %d is %d",a,fibonacci(a));
}