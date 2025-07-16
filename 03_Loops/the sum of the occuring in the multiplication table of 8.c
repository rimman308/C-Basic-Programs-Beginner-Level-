#include<stdio.h>
int main(){
	int n=8,i=1;
	int sum=0;
	for(i;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
		sum+=(n*i);
	}
	printf("the sum is %d\n",sum);
	
	return 0;
}
