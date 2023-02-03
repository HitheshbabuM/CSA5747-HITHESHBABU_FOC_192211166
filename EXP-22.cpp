//22.binary addition
#include <stdio.h>
int main(){
	int bin1,bin2,i=0,r=0,sum[20];
	printf("Enter the first binary number:");
	scanf("%d",&bin1);
	printf("Enter the second binary number:");
	scanf("%d",&bin2);
	while(bin1!=0,bin2!=0){
		sum[i++]=(bin1%10+bin2%10+r)%2;
		r=(bin1%10+bin2%10+r)/2;
		bin1/=10;
		bin2/=10;
		i++;
	}if(r!=0){
		sum[i++]=r;
		--i;
		printf("Sum of two binary numbers: ");
	}while(i>=0){
		printf("%d",sum[i--]);
		
	}return 0;
}
