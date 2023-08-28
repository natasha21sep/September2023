#include <stdio.h>
#include <math.h>
int main(){
	int n,c=0,sum=0,d,a;
	printf("enter a number:");
	scanf("%d",&n);
	a=n;
	while(n){
		c=c+1;
		n=n/10;
	}
	while(n){
		d=n%10;
		sum=sum+pow(d,c);
		n=n/10;
	}
	if(sum==a)
	   printf("armstrong");
	else
	  printf("not a armstrong number");
	return 0;
}

