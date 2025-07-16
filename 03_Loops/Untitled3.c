#include<stdio.h>
int main(){
	int i=1,n=5,value=1;
	//printf("the value of n:\n");
	//scanf("%d",n);
	//for(i=1;i<=n;i++)
	//{
	//    value*=i;	
	//}
	while(i<=n){
		value*=i;
		i++;
	}
	printf("the factorial value is %d\n",value);
	return 0;
}
