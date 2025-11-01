class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        // code here
       int xorr = 0;
       for(int i=0;i<arr.size();i++){
           xorr^=arr[i];
       }
       int rightMost = (xorr & (xorr - 1))^xorr;
       int xorr1=0;
       int xorr2=0;
       vector<int> ans;
       for(int i = 0;i<arr.size();i++){
           if(arr[i]&rightMost)
                xorr1^=arr[i];
            else 
                xorr2^=arr[i];
       }
       return xorr1>xorr2 ? vector<int>{xorr1,xorr2} : vector<int>{xorr2,xorr1};
    }
};