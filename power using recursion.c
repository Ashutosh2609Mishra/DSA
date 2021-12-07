#include<stdio.h>
int power(int m,int n){
	if(n==0) return 1;
	else
	return m*power(m,n-1);
}
int main(){
	printf("%d",power(2,9));
	return 0;
}
