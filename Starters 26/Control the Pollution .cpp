// https://www.codechef.com/START26B/problems/SMOKE

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int N,X,Y;
    while(t--) {
        cin>>N>>X>>Y;
        int total;
        int min_total=1000000;
        int i=0; // bus
        int j;
        while(i<=N)
        {
            j=N-i;//car
            
            int no_of_car = ceil(j/4.0);
            int no_of_bus = ceil(i/100.0);
            // cout<<no_of_bus<<no_of_car<<"\n";
            if(no_of_bus*X == 0)
                total = no_of_car*Y;
            else if(no_of_car*Y ==0)
                total = no_of_bus*X;
            else
                total = no_of_bus*X + no_of_car*Y;
            
            min_total = min(min_total,total);
            
            i++;
        }
        cout<<min_total<<"\n";
    }
	return 0;
}