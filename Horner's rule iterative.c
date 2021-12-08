#include<stdio.h>
double e(int x, int n){
	double s=1;
	for(;n>0;n--){
		s=1+s*x/n;
	}
	return s;
}
int main(){
	printf("%lf \n",e(4,10));
	return 0;
}
