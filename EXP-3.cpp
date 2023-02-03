//3.Generation of odd number series 1,3,5,7....,n
#include <stdio.h>
int main()
{
	int n,a=1;
	printf("Enter the number:");
	scanf("%d", &n);
	while(a<=n){
		printf("%d ",a);
		a+=2;
	}
	return 0;
}
