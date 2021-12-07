#include<stdio.h>
int sum(int n){
	return (n*(n+1))/2;
}
int main(){
	printf("sum of first 10 natural no = %d",sum(10));
	return 0;
}
