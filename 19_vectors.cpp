#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	//Format: vector<DataType> name of vector
	vector<int> v;
	for (int i=-9;i<=-1;i++)
	v.push_back(i);

	cout<<"Size"<<v.size()<<endl;
	cout<<"Capacity: "<<v.capacity()<<endl;
	cout<<"Max-Size: "<<v.max_size()<<endl;

	if(v.empty())
		cout<<"Vector is empty\n";
	else
		cout<<"Vector is not empty\n";

	cout<<"First element: "<<v.front()<<endl;
	cout<<"Last element: "<<v.back()<<endl;
	cout<<"Element at 3rd index: "<<v.at(3)<<endl;
	
	double max = *max_element(v.begin(), v.end());
cout<<"Max value: "<<max<<endl;
}
