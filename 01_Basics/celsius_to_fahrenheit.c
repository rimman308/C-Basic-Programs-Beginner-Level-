#include<stdio.h>
int main()
{
	float celsius , fahrenheit;
	printf("enter celsius temparature:\n");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("fahrenheit temparature:%f",fahrenheit);
	return 0;
}
