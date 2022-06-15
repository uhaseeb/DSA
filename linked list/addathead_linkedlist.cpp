#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		
	void push(Node** head_ref, int new_data)
	{
		 Node* new_node = new Node();
		
		new_node->data = new_data;
		
		new_node->next = (*head_ref);
		
		new_node = (*head_ref);
	}
	
};
int main()
{
	Node nd;
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
	
	nd.push();
}
