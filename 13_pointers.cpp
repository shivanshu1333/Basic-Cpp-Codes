#include<iostream>
using namespace std;
int main()
{
	int y= 10;
	cout<<&y<<endl;
	int *p;
	p=&y;
	cout<<p<<endl;
	cout<<*p<<endl;
	y=100;
	cout<<*p<<endl;

//SIZE OF pointers ARE SAME;;

	int *p1;char *p2;long *p3;
	int a;char b;long c;

	cout<<sizeof(a)<<" "<<sizeof(p1)<<" "<<sizeof(b)<<" "<<sizeof(p2)<<" "<<sizeof(c)<<" "<<sizeof(p3)<<" "<<endl;

//pointer and arrys
	int x[4]={10,20,30,40};
	int *ptr;
	int i;
	ptr=x;
	cout<<x<<" "<<&x[0]<<" "<<ptr<<" "<<&x<<" "<<&ptr<<endl;


	for(i=0;i<4;i++)
	{
		cout<<ptr[i]<<endl;
	}

	for(i=0;i<4;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
}