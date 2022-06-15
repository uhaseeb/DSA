#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

int print(Node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}

int add_node_at_end(Node*&head, int value)
{
	Node* temp = head;
	Node* add_node = new Node();
	add_node->data = value;
	
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = add_node;
	add_node->prev = temp;
}

	int add_node_at_start(Node*&head , int value)
	{
		Node* temp = head;
		Node* add_node = new Node();
		add_node->data = value;
		
		if(head->next == NULL)
		{
			add_node = head;
		}
		else{
			head->prev = add_node;
			add_node->next = head;
			
			head = add_node;
		}
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
			add_node->prev = temp;
			temp->next = add_node;
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
	first->prev=NULL;
	second->data=2;
	second->next=third;
	second->prev = first;
	third->data=3;
	third->next=NULL;
	third->prev = second;
	
	head = first;
	
	//add_node_at_end(head, 55);
//	add_node_at_start(head, 10);
	add_node_at_random_pos(head,3,23);
	print(head);
}

