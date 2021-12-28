#include<stdio.h>
#include<stdlib.h>
struct Array{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr){
	int i;
	printf("\nElements are\n");
	for(i=0;i<arr.length;i++)
		printf("%d ",arr.A[i]);
}
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void Reverse(struct Array *arr){
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--){
		swap(&arr->A[i],&arr->A[j]);
	}
}
int main(){
	struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
	printf("\nCurrent List: ");
	Display(arr1);
	Reverse(&arr1);
	printf("\n After reversing: ");
	Display(arr1);
	return 0;
}
