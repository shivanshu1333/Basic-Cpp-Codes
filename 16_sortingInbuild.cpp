#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[7]={13,41,100,10,8,19,5};
	int i;

cout<<*(a+7)<<" "<<*(a+6)<<endl;

	sort(a,a+7); //ERROR PRONE AREA, starting address and ending address +1

	for(i=0;i<7;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;


if(binary_search(a,a+7,5))
	cout<<"5 is present\n";
else
	cout<<"5 is not present\n";

}