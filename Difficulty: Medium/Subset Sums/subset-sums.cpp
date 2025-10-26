class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        helper(arr,ans,0,0);
        return ans;
    }
    void helper(vector<int>& arr, vector<int>& ans, int idx, int sum){
        if(idx==arr.size()){
            ans.push_back(sum);
            return;
        }
        helper(arr,ans,idx+1,sum+arr[idx]);
        helper(arr,ans,idx+1,sum);
    }
};