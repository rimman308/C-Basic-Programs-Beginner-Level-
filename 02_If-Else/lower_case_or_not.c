#include<stdio.h>
int main(){
	//97-122=a-z ASCII VALUES
	char ch;
	printf("enter your charecter:\n");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122){
		printf("it is lower case charecter,\n");
	}
	else{
		printf("it is not lower case charecter,\n");
	}
	return 0;
}
