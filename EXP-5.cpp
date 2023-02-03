//Generation of sum of series 1+2+3+,.....+n
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		sum=sum+i;
		
	}
	printf("sum is %d",sum);
	return 0;
}
