#include<stdio.h>
int main(){
	float num1,num2,num3,num4;
	printf("enter num1:\n");
	scanf("%f",&num1);
	printf("enter num2:\n");
	scanf("%f",&num2);
	printf("enter num3:\n");
	scanf("%f",&num3);
	printf("enter num4:\n");
	scanf("%f",&num4);
	if(num1>num2 && num1>num3 && num1>num4){
		printf("largest number is %f,\n",num1);
	}
	else if(num2>num1 && num2>num3 && num2>num4){
		printf("largest number is %f,\n",num2);
	}
	else if(num3>num1 && num3>num2 && num3>num4){
		printf("largest number is %f,\n",num3);
	}
	else if(num4>num1 && num4>num2 && num4>num3){
		printf("lrgest number is %f,\n",num4);	
	}
	return 0;
}
