/*
A semester in Chef's University has 120 working days. The University's requirement is that a student should be present for at least 75% of the working days in the semester. If not, the student is failed.

Chef has been taking a lot of holidays, and is now concerned whether he can pass the attendance requirement or not. N working days have already passed, and you are given N bits - B1, B2, …, BN. Bi = 0 denotes that Chef was absent on the ith day, and Bi = 1 denotes that Chef was present on that day.

Can Chef hope to pass the requirement by the end of the semester?

Input:
First line will contain T, the number of testcases. Then the testcases follow.
Each testcase contains two lines of input.
The first line of each testcase contains a single integer, N, the number of days till now.
The second line of each testcase contains a string B of length N where Bi represents the status of the ith day.
Output:
For each testcase, output the answer in a single line - "YES" if Chef can pass the attendance requirement and "NO" if not.

Constraints
1≤T≤10
1≤N≤120
0≤Bi≤1
Sample Input:
3
50
00000000000000000000000000000000000000000000000000
50
01010101010101010101010101010101010101010101010101
2
01
Sample Output:
NO
YES
YES
Explanation:
For Case 1, even if Chef attends all the remaining 70 days, he'll only have an attendance percentage of 70/120 = 58.33% which is less than 75%.

For Case 2, maximum attendance possible is 79.167% which is more than 75%.

For Case 3, maximum attendance possible is 99.167% which is more than 75%.
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
        cin>>n; // no of  days passed
        string attendence;
        cin>>attendence;
        // now logic is 
        //1.to calculate the sum of attendence 
        //2.expect that he will present on remaining days
        //3.add the value of remaining days to the attendence 
        //4.calculate the max possible attendence 
        int no_of_present_days = 0;
        for(int i=0; i<n; i++)
        {
            if(attendence[i] == '1')
            no_of_present_days++;
        }

        cout<<"no of present days: "<<no_of_present_days<<"\n";

        int remaining_days = 120 - n;
        
        int max_present_days = no_of_present_days + remaining_days;
        cout<<"max present days: "<<max_present_days<<"\n";
        float maxPercentage = ((float)max_present_days*100/120);
        cout<<"max percentage is : "<<maxPercentage<<"\n";

        if(maxPercentage>=75)
        cout<<"YES";
        else
        cout<<"NO";
        
    }
	return 0;
}