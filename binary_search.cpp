#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int Binary_Search(vector<int> &A,int x)
{
	int s=0;
	int e=A.size()-1;
	int m;
	while(s<=e)
	{
		m=(s+e)/2;
		if (x==A[m])
		return m;
		else if(A[m]>x)
			s=m+1;
		else 
			e=m-1;
	}
	return -1;
}

int main()
{
	vector <int> A;
	priority_queue <int> q;
int a;

	for(int i=0;i<10;i++)
	{
		cin>>a;
		q.push(a);
	}

	for(int i=0;i<10;i++)
	{
		A.push_back(q.top());
		q.pop();
	}

cin>>a;
cout<<"you requested to search "<<a<<" in the array\n";
int x=Binary_Search(A,a);
cout<<"Index is "<<x<<endl;

}