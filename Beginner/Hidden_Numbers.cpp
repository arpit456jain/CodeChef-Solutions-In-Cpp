/*
Salmon has some hidden numbers that he wants you to find!

Given an integer N, find and output any two integers A and B such that:

1≤A,B≤109, and
A∗B=N.
Input:
The first line of input consists of a single integer T (1≤T≤105) -- the number of testcases.

The next T lines will consist of one integer, N (1≤N≤109).

Output:
For each of the T testcases, output two space-separated integers A and B.

Subtasks
Subtask 1 [100 points]: No additional constraints.
Sample Input:
5
1
3
5
8
10
Sample Output:
1 1
1 3
1 5
1 8
2 5

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<"1 "<<n<<"\n";
    }
	return 0;
}