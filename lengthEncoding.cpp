// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string res="";
    int c=0;
    char curr=src[0];
    for(int i=0;i<src.length();i++){
         if(src[i] != curr)
        {
            res += (curr + to_string(c));
            curr = src[i];
            c = 0;
        }
        c++;
    }
    res += (curr + to_string(c));
    return res;
}    
 
