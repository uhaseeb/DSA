#include<iostream>
using namespace std;
class Node{
	public:
		float data;
		Node* next;
};
int main()
{
	Node* head = NULL;
	Node* second = NULL;		//CREATE POINTERS
	Node* third = NULL;
	
	head = new Node();		// create new nodes
	second = new Node();
	third = new Node();
	
	head->data = 1;			//ALLOCATE DATA TO HEAD NODE
	head->next = second;	//ASSIGN NEXT NODE TO HEAD 
	
	second->data = 2;		//ALLOCATE DATA TO SECOND NODE
	second->next = third;	//ASSIGN NEXT NODE TO SECOND
	
	third->data = 3;
	third->next = NULL;
	

	Node* first;
	first = new Node();
	first->data = 1.5;
	
	//add node at start of the linked list
	first->next= head;
	head->next = second;

	cout<<first->data<<endl;	
	cout<<head->data<<endl;												//PRINT DATA OF HEAD NODE
	cout<<second->data<<endl;
	cout<<third->data<<endl;
}
