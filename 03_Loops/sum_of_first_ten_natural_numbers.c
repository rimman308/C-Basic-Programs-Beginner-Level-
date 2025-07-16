#include<stdio.h>
int main(){
	int i=0;
	int sum=0;
	//while(i<=10){
	//	sum+=i;
	//	i++;
	//}
	//printf("the sum is:%d",sum);
	//for(i;i<=10;i++){
	//	sum+=i;
	//}
	do{
		sum+=i;
	}while(i<=10);
	printf("the sum is:%d",sum);
	return 0;
}
