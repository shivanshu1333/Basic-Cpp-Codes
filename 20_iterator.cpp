#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> ar;
	for(int i=1; i<=5; i++)
		ar.push_back(i);

vector<int>::iterator ptr = ar.begin();

	cout<<*(ar.end()-1);//this is 5
	cout<<*ar.begin();//this is 1
	cout<<*ptr;
	cout<<*next(ptr,5);
	cout<<*next(ptr,4);
	ptr=ptr+5;
	cout<<*prev(ptr,3);
}