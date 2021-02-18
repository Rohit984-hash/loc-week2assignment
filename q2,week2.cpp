#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	}
	int sum=0,p;
	for(int i=0;i<n;i++){
	   if(arr[i]%2==0){
	      p=(2i+1);
	      sum=sum+arr[i]+arr[p];
	   }
	}
	printf("the sum is %d\n",sum);
	return 0;
}
