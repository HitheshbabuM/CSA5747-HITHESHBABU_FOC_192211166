//binary to decimal
#include <stdio.h>
int main(){
	int n,decimal=0,i=1,r;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		decimal+=r*i;
		n/=10;
		i*=2;
		
	}printf("The decimal number is:%d ",decimal);
	return 0;
}
