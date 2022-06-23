#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	stack<int> st;
	cin>>q;
	while(q)
	{
	    int a,b;
	    cin>>a;
	    if(a==1)
	    {
	        cin>>b;    
	        st.push(b);
	       // cout<<"top is"<<st.top()<<"\n";
	    }
	    else if(a==-1)
	    {
	       // cout<<"its -1\n";
	        if(st.empty())
	        {
	            cout<<"kuchbhi?\n";
	        }
	        else
	        {
	           // cout<<"fk/kl";
	            cout<<st.top()<<"\n";
	            st.pop();    
	        }
	        
	        
	    }
	    
	    
	    q--;
	}
	return 0;
}
