#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void stack_fun(stack<int> st)
{
	for(int i=1;i<=5;i++)					// storing seq (5 at the top)	5
	{										//								4
		st.push(i);							//								3
		}									//								2
		cout<<st.top()<<endl;				//								1	(LIFO principle 5 at top will go out first)
		st.pop();
		cout<<"top after pop"<<st.top()<<endl;	// elements are added from bottom to top
}											
void queue_fun(queue<int> qe)
{
	for(int i=0;i<=5;i++)					// seq		5  4  3  2  1  0 (0 at the front )	FIFO principle 0 will go out first
	{
		qe.push(i);	
										// elements are added from left side and go out from right side
		
	}
	cout<<qe.front()<<endl;
	qe.pop();
	cout<<"top after pop"<<qe.front()<<endl;
}

int main()
{
	stack<int> st;
	queue<int> qe;
	
	stack_fun(st);
	queue_fun(qe);
	
}
