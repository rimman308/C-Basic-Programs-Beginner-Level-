#include<stdio.h>
int main(){
	int n ,i;
	printf("enter the value:\n");
	scanf("%d",&n);
	printf("the reverse table is:\n");
	for(i=10;i;i--){
		printf("%d * %d = %d\n",n,i,i*n);
	}
	return 0;
}
