// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    
	   set <long long int> s;
	   s.insert(1);
	   n--;
	   while(n--){
	        auto it = s.begin();
	        long long int x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    } 
        return *s.begin();
	}
	
// array approach	
	
    ull getNthUglyNo(int n) {
	ull ugly[n];
        ull i2=0,i3=0,i5=0;
        ull next2=2, next3=3, next5=5;
        ugly[0]=1;
        for(int i=1; i<n; i++)
        {
            ugly[i] = min(next2, min(next3, next5));
            if(ugly[i] == next2)
            {
                i2++;
                next2=2*ugly[i2];
            }
            if(ugly[i] == next3){
                i3++;
                next3=3*ugly[i3];
            }
            if(ugly[i] == next5){
                i5++;
                next5=5*ugly[i5];
            }
        }
        return ugly[n-1];
	}
};

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
