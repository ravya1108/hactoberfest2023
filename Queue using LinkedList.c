#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
 struct node *next;
}*p,*tmp,*tmp1;
void insert_end(int);
void delete_beg();
void display();
void isEmpty();
int main()
{ 
  int val,n;
  p=NULL;
  do
	{printf("\n************************* MENU ************************");
	 printf("\n1.ENQUEUE");
	 printf("\n2.DEQUE");
	 printf("\n3.IS EMPTY");
	 printf("\n4.DISPLAY");
	 printf("\n5.EXIT");
	 printf("\nenter ur choice : ");
	 scanf("%d",&n);
	 switch(n)
		{case 1: printf("\nenter the value ");
			 scanf("%d",&val);
			 insert_end(val);
			 break;
		 case 2:
			 delete_beg();
			 break;
		 case 3: 
			 isEmpty();
			 break;
		 case 4: display();
		 		 break;
		 case 5: exit(0);
		 		 break;
		 default: printf("\n Wrong Choice!");
		 		  break;
		}
	 printf("\ndo u want to cont... ");
	}while('y'==getch());

 }

 void insert_end(int ele)
 {
	  tmp=p;
	  tmp1=(struct node*)malloc(sizeof(struct node));
	  tmp1->data=ele;
	  tmp1->next=NULL;
	  if(p==NULL)
		p=tmp1;
	  else
		{
			while(tmp->next!=NULL)
				tmp=tmp->next;
		 	tmp->next=tmp1;
		 }
 }

void insert_beg(int ele)
{
	 tmp=p;
	 tmp1=(struct node*)malloc(sizeof(struct node));
	 tmp1->data=ele;
	 tmp1->next=p;
	 p=tmp1;
}

void isEmpty(){
	
 	if(p==NULL)
 		printf("Queue is Empty");
 	else
 	{
 		printf("Queue is Not Empty");
	 }	
}

void ldelete(int ele)
{
     tmp=p;
	 struct node *pre=tmp;
	 while(tmp!=NULL)
		{if(tmp->data==ele)
		    { if(tmp==p)
		       {p=tmp->next;
			free(tmp);
			return;
			}
		      else
			{pre->next=tmp->next;
			 free(tmp);
			 return;
			 }
		    }
		 else
		    { pre=tmp;
		      tmp=tmp->next;
		    }
		}
	  printf("\n no match found!! ");
 }
 
void delete_beg()
{	
	tmp=p;
	if(p==NULL)
		printf("\n no element to be deleted!! ");
	else
	{
		printf("\nelement deleted - %d", p->data);
		p=p->next;
	}

 }
 
void delete_end()
{	
	tmp=p;
	struct node* pre;
	if(p==NULL)
		printf("\n no element to be deleted!! ");
	else if(p->next==NULL)
	{
		printf("\nelement deleted - %d", p->data);
		p=NULL;

	}
		
	else
	{
		while(tmp->next!=NULL){
			pre=tmp;
			tmp=tmp->next;
		}
		pre->next=NULL;
		printf("\nelement deleted - %d", tmp->data);
		
	}

 }

void display()
{
	tmp=p;
 	while(tmp!=NULL)
		{printf("\n %d",tmp->data);
	 	tmp=tmp->next;
		}
}
