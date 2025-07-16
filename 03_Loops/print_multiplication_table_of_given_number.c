#include<stdio.h>
int main(){
	int n,i;
	printf("the value of n:\n");
	scanf("%d",&n);
	printf("the table is\n");
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
