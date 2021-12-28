#include<stdio.h>
#include<stdlib.h>
struct array{
	int A[10];
	int size;
	int length;
};
void display(struct array arr){
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.A[i]);
}
int RbinSearch(int a[],int l,int h,int  key){
	int mid;
	if(l<=h){
		mid=(l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return RbinSearch(a,l,mid-1,key);
		else
			return RbinSearch(a,mid+1,h,key);
	}
	return -1;
}
int main(){
	struct array arr1={{2,3,9,16,18,21,28,32,35},10,9};
	printf("%d",RbinSearch(arr1.A,0,arr1.length,21));
	display(arr1);
	return 0;
}
