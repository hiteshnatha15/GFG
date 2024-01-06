//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b)
	{
	    // Code here
	    int count=0;
	    int temp=0;
	    
	    for(int i=a;i<=b;i++)
	    {
            temp=i;
            for(int j=2;j<=sqrt(i);j++)
            {
                while(temp%j==0)
                {
                    count++;
                    temp=temp/j;
                }
            }
            if(temp>1)
            count++;
	    }
	    return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends