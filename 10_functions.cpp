#include<iostream>
using namespace std;
int maximum(int a, int b);

int main()
{
	int a=5, b=7, c;
	c=maximum(a,b);
	cout<<c;
}

int maximum(int a, int b)
{
	if(a>b)
		return a;
	else 
		return b;
}