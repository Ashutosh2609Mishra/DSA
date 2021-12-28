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
int linearsearch(struct array arr,int key){
	int i;
	for(i=0;i<arr.length;i++){
		if(key==arr.A[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	struct array arr1={{2,23,14,5,6,9,8,12},10,8};
	printf("%d",linearsearch(arr1,14));
	display(arr1);
	return 0;
}
