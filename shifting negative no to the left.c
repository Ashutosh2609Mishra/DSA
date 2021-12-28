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
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void Rearrange(struct Array *arr){
	int i,j;
	i=0;
	j=arr->length-1;
	while(i<j){
		while(arr->A[i]<0) i++;
		while(arr->A[i]>=0) j--;
		if(i<j) swap(&arr->A[i],&arr->A[j]);
	}
}
int main(){
	struct Array arr={{2,-3,4,-5,10,-15},10,6};
	Rearrange(&arr);
	Display(arr);
	return 0;
}
