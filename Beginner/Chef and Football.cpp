#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	map<int ,pair<int,int>> m;
	int pairs = n*(n-1)//2;
	int t1,t2,g1,g2;
	for(int i=0;i<pairs;i++)
	{
	    cin>>t1>>t1>>g1>>g2;
	    m[t1.second] += g1;
	    m[t2.second] += g2;
	}
	return 0;
}
