//11.Summing up any n and finding its average
#include<stdio.h>
int main(){
	int n,i,num,sum=0;
	float avg;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter the number: ");
		scanf("%d",&num);
		sum+=num;	
	}
	 avg=sum/n;
	printf("\n Sum of %d numbers=%d",n,sum);
	printf("\n average of %d numbers=%.2f",n,avg);
	return 0;
}
