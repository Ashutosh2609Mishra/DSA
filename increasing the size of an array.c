#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p=(int *)malloc(5*sizeof(int));
	int i;
	for(i=0;i<5;i++){
		p[i]=i+1;
	}
	printf("current array: ");
	for(i=0;i<5;i++){
		printf("%d ",p[i]);
	}
	int *q=(int *)malloc(10*sizeof(int));
	for(i=0;i<10;i++){
		if(i<5) q[i]=p[i];
		else q[i]=i+1;
	}
	free (p);
	p=q;
	q=NULL;
	printf("Increased array: ");
	for(i=0;i<10;i++){
		printf("%d ",p[i]);
	}
	free (p);
	return 0;
}
