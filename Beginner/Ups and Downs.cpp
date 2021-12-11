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
void naiveApproch()
{
    int n;
    cin>>n;
	    int arr[n];
	    int arr2[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	   // print(arr,n); 
	   
	    
	    int j=0;
	    int i=0;
	    while(i<n and j<n)
	    {
	    arr2[j] = arr[i];
	    j=j+2;
	    i++;
	    }
	    
	    j=1;
	    while(i<n and j<n)
	    {
	    arr2[j] = arr[i];
	    j=j+2;
	    i++;
	    }
	    print(arr2,n);
}
void optimised()
{
    int n;
    cin>>n;
	    int arr[n];
	    int arr2[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(i%2==0)
	        {
	            //right element should be greater
	            if(arr[i+1]<arr[i])
	            swap(arr[i],arr[i+1]);
	        }
	        else
	        {
	            // left element should be smaller
	            if(arr[i+1]>arr[i])
	            swap(arr[i],arr[i+1]);
	            
	        }
	    }
	    
	    print(arr,n);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	   // naiveApproch();
	   optimised();
	    t--;
	}
	return 0;
}
