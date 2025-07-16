#include<stdio.h>

int sum_of(int n){
    if( n==1 || n==0){
        return 1;
    }
    return (sum_of(n-1)+n);
}
int main(){
    int num;
    printf("Enter no \n");
    scanf("%d",&num);
    printf("The sum of first %d natural number is %d ",num,sum_of(num));
}