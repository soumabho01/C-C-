#include <stdio.h>
int main()
{
	int n,i;
	unsigned long long t1=0,t2=1,nextTerm;
	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	printf("Fibonacci sequence:");
	
	for(i=1;i<=n;++i){
		printf("%llu,",t1);
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	
	return 0;
}
