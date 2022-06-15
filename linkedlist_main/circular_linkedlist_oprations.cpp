#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

int print(Node*&head)
{
	Node* n =head;
	do{
		cout<<n->data<<endl;
		n=n->next;
	} 
	while(n!=head);
}

int add_node_at_end(Node*&head, int value)
{
	Node* temp = head;
	Node* add_node = new Node();
	add_node->data = value;
	
	while(temp->next!=head)
	{
		temp = temp->next;
	}
	temp->next = add_node;
	
}

	int add_node_at_start(Node*&head , int value)		
	{
		Node* temp = head;
		Node* add_node = new Node();
		add_node->data = value;
		
	while(temp->next!=head)
	{
		temp = temp->next;
	}
	add_node->next = head;
	temp->next = add_node; 
		
		head = add_node;
		
	}
	
	int add_node_at_random_pos(Node*&head, int pos, int value)
	{
			Node* temp = head;
		Node* add_node = new Node();
		add_node->data = value;
		
			if(head->next == NULL)
		{
			add_node = head;
		}
		else{
			for(int i=1;i<pos-1;i++)									//  1(temp)		2	3	4		pos=3
			{
				temp = temp->next;
			}
			add_node->next = temp->next;
			temp->next = add_node;
		}
	}
	int delete_node_at_start(Node*&head)		
	{
		Node* temp = head;
		
		while(temp->next!=head)
		{
			temp = temp->next;
		}
		head = head->next;
		temp->next = head; 
		
		
	}

	int delete_node_from_end(Node*&head)
	{
		Node* temp = head;
		
		while(temp->next->next!=head)
		{
			temp = temp->next;
		}
		temp->next->next = NULL;
		temp->next = head;
	}

	int delete_node_from_random_pos(Node*&head, int pos)
	{
			if(head->next == NULL)
		{
			head =NULL;
			cout<<"head is null";
		}
		else
		{
			Node* temp = head;
			
			for(int i=1;i<pos-1; i++)
			{														
					temp = temp->next;													
				
			}
				temp->next = temp->next->next;	
				temp->next->next= NULL;
	}
}
int main()
{
	struct Node* head;
	struct Node* first = new Node();
	struct Node* second= new Node();
	struct Node* third= new Node();
	struct Node* fourth = new Node();
	first->data=1;
	first->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data = 4;
	fourth->next = first;
	
	head = first;
	
//	add_node_at_end(head, 55);
//	add_node_at_start(head, 10);
//	add_node_at_random_pos(head,3,23);
delete_node_at_start(head);
//delete_node_from_end(head);
//delete_node_from_random_pos(head,3);
	print(head);
}

