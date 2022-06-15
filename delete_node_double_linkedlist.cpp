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

int remove_node_from_end(Node*&head)							// 	1	2	3	4(temp)
{
	Node* temp = head;
	
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->prev->next = NULL;
	temp = NULL;
}


	int remove_node_from_start(Node*&head)
	{
		Node* temp = head;
		
		if(head->next == NULL)
		{
			head = NULL;
		}
		else{
			head = head->next;
		}
	}
	
	int remove_node_from_random_pos(Node*&head, int pos)
	{
			Node* temp = head;
		
			if(head->next == NULL)
		{
				head = NULL;
				cout<<"head is null";
		}
		else{
			for(int i=1;i<pos;i++)									//  1(temp)		2	3	4		pos=3
			{			
				temp = temp->next;
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
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
	
	//remove_node_from_end(head);
		//remove_node_from_start(head);
	remove_node_from_random_pos(head,2);
	print(head);
}

