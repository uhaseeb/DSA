#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> stack;
	stack.push(1);
	stack.push(2);		//push function time complexity O(1)
	stack.push(3);
	stack.push(4);
	stack.push(5);
	
	
	cout<<stack.size()<<endl;		
	
	cout<<stack.top()<<endl;	// top function time complexity O(1)
	
	stack.pop();		//pop function tie complexity O(1)
	
		cout<<stack.top();
		
	bool check = stack.empty();				// empty function checks if stack is empty or not 
	cout<<check;

		
}
