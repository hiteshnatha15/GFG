class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int l = 0;
        int r = arr.size()-1;
        int ans = INT_MAX;
        int idx = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[l]<=arr[mid]){
                if(ans>arr[l]){
                    ans = arr[l];
                    idx = l;
                }
                l = mid + 1;
            } else {
                if(ans>arr[mid]){
                    ans = arr[mid];
                    idx = mid;
                }
                r = mid - 1;
            }
        }
        return idx;
    }
};
