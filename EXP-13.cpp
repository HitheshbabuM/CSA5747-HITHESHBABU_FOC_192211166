//13.Summing up digits of an integer number
#include <stdio.h>
int main(){
	int n,num,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	while(num!=0){
		r=num%10;
		sum+=r;
		num/=10;
	}printf("sum of the digits= %d ",sum);
	return 0;
}
