#include<stdio.h>
int main(){
	float income , tax=0;
	printf("enter your income:\n");
	scanf("%f",&income);
	if(income>=250000 && income<=500000){
		tax = tax+0.05 *(income-250000);
		printf("your tax is:%f\n",tax);
	}
	else if(income>=500000 && income<=1000000){
		tax = tax+0.2 *(income-500000);
		printf("your tax is:%f\n",tax);
	}
	else if(income>=100000){
		tax = tax+0.3 *(income-1000000);
		printf("your tax is:%f\n",tax);
    }
    else{
    	printf("your income is below 2.5L you do not havr to pay tax ,\n");
	}
	return 0;
}
