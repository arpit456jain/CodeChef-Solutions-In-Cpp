// It's dinner time. Ashish is very hungry and wants to eat something. He has X rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is Y rupees while the cost of a BURGER is Z rupees.

// Ashish can eat at most one thing. Find out what will Ashish eat for his dinner.

// Input Format
// The first line will contain T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three integers X, Y and Z - the money Ashish has, the cost of a PIZZA and the cost of a BURGER.
// Output Format
// For each test case, output what Ashish will eat. (PIZZA, BURGER or NOTHING).

// You may print each character of the string in uppercase or lowercase. (for example, the strings Pizza, pIzZa and piZZa will all be treated as identical).

// Constraints
// 1≤T≤100
// 1≤X,Y,Z≤100
// Sample Input 1 
// 3
// 50 40 60
// 40 55 39
// 30 42 37
// Sample Output 1 
// PIZZA
// BURGER
// NOTHING

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int X,Y,Z;
    while(t--) {
        cin>>X>>Y>>Z;
        if(X>=Y)
        cout<<"PIZZA\n";
        else if(X>=Z)
        cout<<"BURGER\n";
        else
        cout<<"NOTHING\n";
    }
	return 0;
}