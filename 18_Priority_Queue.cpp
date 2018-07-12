#include<iostream>
#include<queue>

using namespace std;

int main()
{
	priority_queue <int> q;
	q.push(4);
	q.push(80);
	q.push(27);
	q.push(100);

while(!q.empty())
	{
		cout<<q.top()<<endl;
		q.pop();
	}
}