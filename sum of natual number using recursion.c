#include<stdio.h>
int sum(int n){
	if(n==0) return 0;
	else return sum(n-1)+n;
}
int main(){
	printf("sum of first 10 natural no = %d",sum(10));
	return 0;
}
