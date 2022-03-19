#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}*first;
void create(int A[],int n){
	int i;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++){
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void Display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
struct Node *LSearch(struct Node *p,int key){
	while(p!=NULL){
		if(key==p->data)
			return p;
		p=p->next;
	}
	return NULL;
}
int main(){
	struct Node *temp;
	int A[]={3,5,7,10,25,8,32,2};
	create(A,8);
	temp=LSearch(first,17);
	if(temp)
		printf("Key is found");
	else
		printf("key not found");
	return 0;
}
