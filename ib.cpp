#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    vector <int> v;
    if(A.size()==1 && A[0]==0)
    {v.push_back(1);}
    else
    {vector<int>:: iterator a=A.end()-1;
    int ans=0,c,b=0;
    for(int i=0;i<A.size();i++)
    {ans+=*a*pow(10,i);
    a++;}
    ans++;
    c=ans;
    if(ans<0)
    ans=ans*-1;
    while(ans>0)
    {ans=ans/10;
    b++;}
    for(int i=b;i<=1;i--)
    {
        v.push_back(c%10);
        c=c/10;
    }}

    return v;
}

int main()
{
    vector <int> alph;
    alph.push_back(1);
    alph.push_back(3);
    alph.push_back(5);
    vector <int> beta=plusOne(alph);
cout<<beta[2];
}