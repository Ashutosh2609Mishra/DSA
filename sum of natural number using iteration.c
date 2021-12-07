#include<stdio.h>
int sum(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
		s=s+i;
	}
	return s;
}
int main(){
	printf("sum of first 10 natural no = %d",sum(10));
	return 0;
}
