#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    // cout<<"start";
     for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	    
	    cout<<"\n";
	   //cout<<"end";
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
        int n;
        cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	   	  cin>>arr[i];
	   	  
	   	sort(arr,arr+n);
	   	int c=0;
	   	for(int i=0;i<n;i++)
	   	{
	   	    if(arr[i]<=i)
	   	    c++;
	   	    else
	   	    break;
	   	}
	   	cout<<c<<"\n";
	    t--;
	}
	return 0;
}
