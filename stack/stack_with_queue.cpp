#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Stack{
	queue<int> q1,q2;
	int total_size;
	
	public:
		void add()
		{
			for(int i=0;i<3;i++)
			{
				q1.push(i);
			}
		}
		void push(int x)
		{
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
				cout<<q2.front()<<endl;
			}
		}
		void swap()
		{
			queue<int> q;
			q =q1;
			q2=q1;
			q1=q;
		}
};

int main()
{
	Stack s;
	s.add();
	s.push(3);
}
