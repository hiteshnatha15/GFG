class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int ans = 0;
        int temp = 0;
        int i=0;
        int j=0;
        while(i<arr.size() && j<dep.size()){
            if(arr[i]<=dep[j]){
                i++;
                temp++;
            } else {
                temp--;
                j++;
            }
            ans=max(temp,ans);
        }
        return ans;
    }
};
