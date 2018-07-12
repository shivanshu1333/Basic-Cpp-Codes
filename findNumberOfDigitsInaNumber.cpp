#include<iostream>
using namespace std;
int main()
{int b,a; int ans=0;
	cout<<"Enter any number whose number of digits you want to know\n";
	cin>>a;
b=a;
	if(a==0)
		ans=1;
	else 
	{	
		while(a)
		{
			a=a/10;
			ans++;
		}
	}	
cout<<"Number of digits in "<<b<<" are: "<<ans<<"\n";
}