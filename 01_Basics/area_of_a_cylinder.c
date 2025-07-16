#include<stdio.h>
int main()
{
	float radius , pi=3.14 , area ,height;
	printf("enter radius:\n");
	scanf("%f",&radius);
	printf("enter height:\n");
	scanf("%f",&height);
	area=pi*radius*radius*height;
	printf("the area of cylinder:%f",area);
	return 0;
}
