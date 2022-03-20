#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void Display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
int count(struct Node *p){
	int l=0;
	while(p){
		l++;
		p=p->next;
	}
	return l;
}
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
void Reverse1(struct Node *q,struct Node *p){
	if(p){
		Reverse1(p,p->next);
		p->next=q;
	}
	else
		first=q;
}
int main(){
	int A[]={10,20,30,40,50};
	create(A,5);
	Display(first);
	printf("\n");
	Reverse1(NULL,first);
	Display(first);
	return 0;
}
