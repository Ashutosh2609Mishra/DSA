#include<stdio.h>
int nCr(int n,int r){
	if(n==4||r==0)
		return 1;
	return nCr(n-1,r-1)+nCr(n-1,r);
}
int main(){
	printf("%d \n ",nCr(5,3));
	return 0;
}
