#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int N,A;
    while(t--) {
        cin>>N>>A;
        
        int infected = A;
        int not_infected = N - A;
        
        cout<<min(infected,not_infected)<<"\n";
    }
	return 0;
}