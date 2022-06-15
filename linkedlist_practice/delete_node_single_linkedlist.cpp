#include<iostream>
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
	int delete_from_start(Node*&head)
	{
		Node* temp = head;
		if(temp==NULL)
		{
			cout<<"no node to delete";
			
		}
		else{												//		1(head)		2		3
			Node* temp = head;								//		1(head)(temp)	2	3
			
			head = head->next;								//		1(temp)		2(head)	3
															//			
			temp = NULL;									//		2(head)		3	
			
		}
	}
	int delete_from_end(Node*head)							//		1(head)		2		3
	{
		if(head->next==NULL)
		{
		return NULL;
		}
		else{
			Node* temp = head;
											// 		1(temp)(head)	2	3	4
			while(temp->next->next != NULL)					//		1(head)		2(temp)	3	4
			{												// 		1(head)		2		3(temp)	4(temp->next)
				temp = temp->next;							//		
				
			}
			temp->next->next = NULL;						
			
			temp->next = NULL;								
		
		}
		
	}
	
	int delete_from_pos(Node*&head, int pos)			//		1	2	3	4		POS =3
	{													//
		if(head->next == NULL)
		{
			head =NULL;
		}
		else
		{
		//	Node* p = head;
		//	Node* q = head->next;
			Node*temp = head;
			
			for(int i=1;i<pos-1; i++)
			{																// 1(p)		2(q)	3	4
					temp = temp->next;													// 1	2(p)	3(q)	4    iteration 1 i=1
			//	p =p->next;													
			//	q = q->next;
				
			}
				temp->next = temp->next->next;	
				temp = NULL;
		//	p->next = q->next;
		//	q = NULL;
				
						
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
	fourth->data=4;
	fourth->next=NULL;
	head = first;
	
	//delete_from_start(head);
	//delete_from_end(head);
	delete_from_pos(head, 3);
	print(head);
	
}
