#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

int print(Node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
int insert_at_start(Node**head)
{
	struct Node* newnode= new Node();
	newnode->data=10;
	newnode->next = *head;
	*head = newnode;
	
}
int insert_at_end(Node**head)
{
	struct Node* newnode= new Node();
	newnode->data=4;
	newnode->next=NULL;
	struct Node* temp;
	temp= *head;
	if(temp==NULL)
	{
		newnode = temp;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		
	}
}
int insert_after(Node* prev)
{
	struct Node* newnode = new Node();
	
	if(prev==NULL)
	{
		cout<<"Previous cannot be null";
	}
	else{
		newnode->next= prev->next;
		prev->next= newnode;
	}
}
int insert_before(Node* Next)
{
	struct Node* newnode = new Node();
	newnode->data=6;
	if(Next==NULL)
	{
		cout<<"Next cannot be null";
	}
	else{
		newnode->next = Next->next;
		Next->next = newnode;
	}
}

int main()
{
	struct Node* head;
	struct Node* first = new Node();
	struct Node* second= new Node();
	struct Node* third= new Node();
	
	first->data=1;
	first->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	head = first;
	
	insert_at_start(&head);
	
//	print(head);
//	insert_at_end(&head);
//	insert_after(first);
	
	insert_before(second);
	print(head);
}

