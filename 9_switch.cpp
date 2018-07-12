#include<iostream>
using namespace std;
int main()
{	
	int ans;
	cout<<"Enter yoiur gym suppliment requirement"<<endl;
	cout<<"Protein-1, Creatin-2, BCAA-3, Preworkout-4, Glutamin-5, Fish oil-6"<<endl;
	
	cin>>ans;

	switch(ans)
	{
		case 1:
			cout<<"you opt protein"<<endl;
			break;
		case 2:
			cout<<"you opt creatine"<<endl;
			break;
		case 3:
			cout<<"you opt BCAA"<<endl;
			break;
		case 4:
			cout<<"you opt Preworkout"<<endl;
			break;
		case 5:
			cout<<"you opt Glutamin"<<endl;
			break;
		case 6:
			cout<<"you opt Fish oil"<<endl;
			break;
		default:
			cout<<"you opt select right suppliment"<<endl;
			break;
		}
}