#include <iostream>

using namespace std;


int main() {
	// your code goes here
	int t,n;

	cin>>t;

	while(t>0)
	{
	    cin>>n;
	    int maxval=0;
	    int minval=1000000;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i] > maxval)
	        maxval = arr[i];
	        
	        if(arr[i]<minval)
	        minval = arr[i];
	    }
	   // cout<<maxval<<minval;
	    cout<<maxval-minval<<"\n";
	    
	    t--;
	}
	return 0;
}
