//2.Generation of even nuber series 2,4,6,8.....,n 
 #include <stdio.h>
int main()
{  
  int n,a=2;
  printf("Enter the number:");
  scanf("%d",&n);
  while(a<=n){
  	printf("%d ",a);
  	a+=2;
  }
  return 0;
}
