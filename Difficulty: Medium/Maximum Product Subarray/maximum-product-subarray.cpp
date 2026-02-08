class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        long long l = 1;
        long long r = 1;
        long long ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(l==0)
                l=1;
            if(r==0)
                r=1;
            l*=arr[i];
            r*=arr[arr.size()-i-1];
            ans=max(ans,max(l,r));
        }
        return (int)ans;
    }
};