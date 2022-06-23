#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
        int d,c;
        cin>>d>>c;
	    
	    int a1,a2,a3;
	    int b1,b2,b3;
	    
	    cin>>a1>>a2>>a3;
	    cin>>b1>>b2>>b3;
	    
	    //tota; charge if he does not buy coupon
	    int charge = 2*d;
	    
	    //total charge if he buys the coupon
	    int charge_with_coupon = c;
	    if((a1+a2+a3)<150)
	    {
	        charge_with_coupon = charge_with_coupon + d;
	    }
	    if((b1+b2+b3)<150)
	    {
	        charge_with_coupon = charge_with_coupon + d;
	    }
	    
	    if(charge_with_coupon>=charge)
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	    
	    t--;
	}
	return 0;
}
        