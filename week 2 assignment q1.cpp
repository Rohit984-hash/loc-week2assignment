#include <stdio.h>
void main () {
	int num,i,sum;
	scanf("Enter the number %d",num);
	while (num>0){
		i=num%10;
		num=num/10;
		sum=0;
		sum=sum+i;
		
		
	}
	printf("the sum is %d",sum);
	
	
}
