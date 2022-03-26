#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"
#include "Queue.h"
struct Node *root=NULL;
void Treecreate(){
	struct Node *p,*t;
	int x;
	struct Queue q;
	create(&q,100);
	printf("Enter root value ");
	scanf("%d",&x);
	root=(struct Node *)malloc(sizeof(struct Node));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	while(!isEmpty(q)){
		p=dequeue(&q);
		printf("enter left child of %d ",p->data);
		scanf("%d",&x);
		if(x!=-1){
			t=(struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
		}
		printf("enter right child of %d ",p->data);
		scanf("%d",&x);
		if(x!=-1){
			t=(struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
		
	}
}
void Preorder(struct Node *p){
	if(p!=NULL){
		printf("%d ",p->data);
		Preorder(p->lchild);
		Preorder(p->rchild);
	}
}
void Inorder(struct Node *p){
	if(p!=NULL){
		Inorder(p->lchild);
		printf("%d ",p->data);
		Inorder(p->rchild);
	}
}
void Postorder(struct Node *p){
	if(p!=NULL){
		Postorder(p->lchild);
		Postorder(p->rchild);
		printf("%d ",p->data);
	}
}
void IPreorder(struct Node *p){
	struct Stack stk;
	Stackcreate(&stk,100);
	while(p!=NULL|| !isEmptyStack(stk)){
		if(p!=NULL){
			printf("%d ",p->data);
			push(&stk,p);
			p=p->lchild;
		}
		else{
			p=pop(&stk);
			p=p->rchild;
		}
	}
}
void IInorder(struct Node *p){
	struct Stack stk;
	Stackcreate(&stk,100);
	while(p!=NULL|| !isEmptyStack(stk)){
		if(p!=NULL){
			push(&stk,p);
			p=p->lchild;
		}
		else{
			p=pop(&stk);
			printf("%d ",p->data);
			p=p->rchild;
		}
	}
}
int count(struct Node *root){
	if(root)
		return count(root->lchild)+count(root->rchild)+1;
	return 0;
}
int height(struct Node *r){
	int x=0,y=0;
	if(r==NULL)
		return 0;
	x=height(r->lchild);
	y=height(r->rchild);
	if(x>y)
		return x+1;
	else
		return y+1;
}
int main(){
	Treecreate();
	printf("count %d ",count(root));
	printf("\n Height %d ",height(root)); 
	return 0;
}
