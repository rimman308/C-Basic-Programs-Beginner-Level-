#include<stdio.h>
int main(){
	int i=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d X %d = %d\n",i,n,i*n);
	}
	return 0;
}
