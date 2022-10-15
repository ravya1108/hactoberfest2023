#include<stdio.h>
struct node
{
	int data;
	struct node *link;
};
void insertb(struct node *head,int n)
{
	struct node *n11;
	n11=(struct node *)malloc(sizeof(struct node *));
	n11->data=n;
	n11->link=head->link;
	head->link=n11;
}

void display(struct node *p)
{
	while(p!=NULL)
	{
		p=p->link;
		printf("%d  ",p->data);
    }
}
int main()
{
	int a;
	struct node *head=NULL,*n1=NULL,*n2=NULL,*n3=NULL;
	head=(struct node *)malloc(sizeof(struct node*));
	n1=(struct node *)malloc(sizeof(struct node));
	n2=(struct node *)malloc(sizeof(struct node));
	n3=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("no memory available");
	}
	else
	{
		head->link=n1;
		n1->data=5;
		n1->link=n2;
		n2->data=6;
		n2->link=n3;
		n3->data=7;
		n3->link=NULL;
		insertb(head,43);
		display(head);
		return 0;
	}
}
