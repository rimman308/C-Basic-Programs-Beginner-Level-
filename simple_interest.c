#include<stdio.h>
 int main()
 {
 	float principle , rate , year ;
 	float simpleinterest ;
 	printf("enter principle:\n");
 	scanf("%f",&principle);
 	printf(" enter rate:\n");
 	scanf("%f",&rate);
 	printf("enter year:\n");
 	scanf("%f",&year);
 	simpleinterest=(principle*rate*year)/100;
 	printf("simpleinterest is:%f",simpleinterest);
 return 0;	
 }
