//Summing up of cube of n numbers
#include <stdio.h>
int main(){
	int a=1,n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(a<=n){
		sum=sum+(a*a*a);
		a++;
	}
	printf("sum is: %d",sum);
	return 0;
	
}

