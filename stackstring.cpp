#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string> words;
	words.push("hello");
	words.push("hi");
	words.push("world");
	words.push("test");
	words.push("randon");
	
	cout<<words.size()<<endl;
	
	
	words.pop();
	
	cout<<words.top();
	
for(int i=0;i<5;i++)
{
	if(!words.empty())
	{
		words.pop();
		cout<<"stack has "<<words.size()<<" elements"<<endl;
	}
	else
	{
		cout<<"stack empty";
	}
}
}
