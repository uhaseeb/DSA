#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;

	void print_data(Node* n)
	{
		int i=1;
		while(n!=NULL)
		{
			cout<<"Data at "<<i<<" node is"<< n->data<<endl;
			n=n->next;
			i++;
		}
	}
	
};
int main()
{
	Node nd;
	Node* head = NULL;
	Node* second = NULL;		//CREATE POINTERS
	Node* third = NULL;
	
	Node* first = NULL;
	
	
	head = new Node();		// create new nodes
	second = new Node();
	third = new Node();
	first = new Node();
	
	first->next = head;
	first->data = 0;
	
	
	
	head->data = 1;			//ALLOCATE DATA TO HEAD NODE
	head->next = second;	//ASSIGN NEXT NODE TO HEAD 
	
	second->data = 2;		//ALLOCATE DATA TO SECOND NODE
	second->next = third;	//ASSIGN NEXT NODE TO SECOND
	
	third->data = 3;
	third->next = NULL;
	
	nd.print_data(first);
}
