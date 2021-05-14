#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>add(vector<int>&x,vector<int>&y)
{
    //write the addition of two vectors
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    long long int len=min(x.size(),y.size());
    vector<int>res;
    int carry=0;
    for(int i=0;i<len;i++)
    {
        int val=x[i]+y[i]+carry;
        carry=val/10;
        res.push_back(val%10);
    }
    if(x.size()>len){
        for(int i=len;i<x.size();i++)
        {
            int val=x[i]+carry;
            carry=val/10;
            res.push_back(val%10);
        }
        
    }
    if(y.size()>len)
    {
        for(int i=len;i<y.size();i++)
        {
            int val=y[i]+carry;
            carry=val/10;
            res.push_back(val%10);
        }
    }
    while(carry)
    {
        res.push_back(carry%10);
        carry/=10;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    string a,b;//'12345678'
	    cin>>a>>b;
	    vector<int>va;
	    vector<int>vb;
	    for(int i=0;i<a.size();i++)
	    {
	        va.push_back(a[i]-'0');//50-48
	    }
	    for(int i=0;i<b.size();i++)
	    {
	        vb.push_back(b[i]-'0');
	    }
	    vector<int>sum=add(va,vb);
	    for(auto i:sum)
	    {
	        cout<<i;
	    }
	    cout<<"\n";
	}
	return 0;
}