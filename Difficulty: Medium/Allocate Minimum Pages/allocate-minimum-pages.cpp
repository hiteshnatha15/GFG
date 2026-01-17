class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        if (k > arr.size()) return -1;
        int f = -1;
        
        while(low<=high){
            int mid = (low+high)/2;
            int temp=1;
            int ans=0;
            for(int i=0;i<arr.size();i++){
                if(ans+arr[i]<=mid){
                    ans+=arr[i];
                } else {
                    ans=arr[i];
                    temp++;
                }
            }
            if(temp<=k){
                high = mid - 1;
                f=mid;
            } else {
                low = mid + 1;
            }
        }
        return f;
    }
};