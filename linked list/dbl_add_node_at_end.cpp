#include<iostream>
using namespace std;
class Node{
	public:
		float data;
		Node* next;
		Node* prev;
};
int main()
{
	Node* head = NULL;
	Node* second = NULL;		//CREATE POINTERS
	Node* third = NULL;
	
	head = new Node();		// create new nodes
	second = new Node();
	third = new Node();
	
	head->prev=NULL;
	head->data = 1;			//ALLOCATE DATA TO HEAD NODE
	head->next = second;	//ASSIGN NEXT NODE TO HEAD 
	
	second->prev=head;
	second->data = 2;		//ALLOCATE DATA TO SECOND NODE
	second->next = third;	//ASSIGN NEXT NODE TO SECOND
	
	third->prev=second;
	third->data = 3;
	third->next = NULL;
	
	
		//added node at end of the doubly linked list
	Node* last= NULL;
	last= new Node();
	
	last->data=4;
	last->prev=third;
	last->next=NULL;
	third->next=last;
	

	cout<<head->data<<endl;												//PRINT DATA OF HEAD NODE
	cout<<second->data<<endl;
	cout<<third->data<<endl;
	cout<<last->data<<endl;
	
}
