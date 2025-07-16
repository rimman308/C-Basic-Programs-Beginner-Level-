#include<stdio.h>
int main(){
	int sub1 , sub2 , sub3 , total ;
	printf("enter number of sub1:\n");
	scanf("%d",&sub1);
	printf("enter number of sub2:\n");
	scanf("%d",&sub2);
	printf("enter number of sub3:\n");
	scanf("%d",&sub3);
	total=sub1+sub2+sub3;
	printf("the total is:%d \n",total);
	if(sub1>=33 && sub2>=33 && sub3>=33 && total>=120){
		printf("the student is pass\n");
	}
	else{
		printf("the student is fail\n");
	}
	return 0;
}
