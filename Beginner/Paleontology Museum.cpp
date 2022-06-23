#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t)
	{
	    int a,b;
	    cin>>a>>b;
	    string str1;
	    cin>>str1;
	    set<char> s1;
	    for(int i=0;i<a;i++)
	    {
	       // cout<<str1[i];
	        s1.insert(str1[i]);
	    }
	   // for(auto x:s1)
	   // cout<<x<<" "<<"\n";
	    
	   // cout<<b<<" "<<s1.size()<<"\n";
	    
	    if(s1.size()>b)
	    cout<<0<<"\n";
	    else
	    cout<<b - s1.size() <<"\n";
	    
	    t--;
	}
	return 0;
}
