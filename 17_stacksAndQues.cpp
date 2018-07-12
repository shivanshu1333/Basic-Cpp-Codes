#include<iostream>
#include <stack>
#include<queue>
using namespace std;
int main()
{

	//LIFO-> STACK

	stack <int> s,s1;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//FIOF-> QUEUE

	queue <int> l,l1;
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	cout<<s.size()<<" "<<l.front()<<endl;

	s1=s;
	l1=l;
	while(!s1.empty()||!l1.empty())
	{
		cout<<s1.top()<<" "<<l1.front()<<endl;
		l1.pop();
		s1.pop();
	}

	
}