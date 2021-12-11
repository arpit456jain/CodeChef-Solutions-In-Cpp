#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a;
	int even =0;
	int odd=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    if(a%2 == 0)
	    even++;
	    else
	    odd++;
	}
	
	if(even>odd)
	cout<<"READY FOR BATTLE";
	else
	cout<<"NOT READY";
	
	return 0;
}
