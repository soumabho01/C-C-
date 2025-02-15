//23BCE7546
#include <stdio.h>

int main()
{
	float principal,rate,time,simpleInterest;
	
	printf("Enter the principal amount");
	scanf("%f",&principal);
	
	printf("Enter the rate of interest");
	scanf("%f",&rate);
	
	printf("Enter the time period in years:");
	scanf("%f",&time);
	
	simpleInterest=(principal*rate*time)/100;
	
	printf("Simple Interest:%f",simpleInterest);
	
	return 0;
	
}
