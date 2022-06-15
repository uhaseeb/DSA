#include<iostream>
#include<queue>
using namespace std;

void show(queue<string> str)
{
	queue<string> que = str;
	que.pop();
	cout<<"top of queue is:"<<que.front()<<endl;	
	cout<<que.size();
}
void check(queue<string> str)
{
	cout<<str.size();
	for(int i=0;i<2;i++)
	{
		show(str);
	}
}
int main()
{
	queue<string> str;
	str.push("has");
	str.push("eeb");
	str.push("abc");

	check(str);
}

