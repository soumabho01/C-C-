#include <stdio.h>

int main()
{
	float num1,num2,num3,average;
	printf("Enter the first number:");
	scanf("%f",&num1);
	
	printf("Enter the second number:");
	scanf("%f",&num2);
	
	printf("Enter the third number:");
	scanf("%f",&num3);
	
	average=(num1+num2+num3)/3;
	
	printf("Average:(%.2f + %.2f +%.2f)/3= %.2f\n",num1,num2,num3,average);
	
	return 0;
}
