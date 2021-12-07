#include<stdio.h>
int fact(int n){
	int f=1;
	int i;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int main(){
	int r;
	r=fact(5);
	printf("%d",r);
}
