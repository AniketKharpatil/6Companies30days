//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
// Solution:

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int c=0,i=0,j=0;
        long long prod=1;
        while(j<n){
        prod *= a[j];
           if(prod >= k)
           {
               while(prod >= k && i<= j)
               {
                   prod /= a[i++];
               }
           }
           c += (j-i+1);
           j++;
        }return c;
      
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
