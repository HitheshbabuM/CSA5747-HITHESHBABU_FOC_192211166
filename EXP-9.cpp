//9.Factorial of the given number
#include <stdio.h>
int main(){
	int i=1,f=1,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n){
		f=f*i;
		i++;
		
	}
	printf("the factorial of %d is: %d",n,f);
	return 0;
}
