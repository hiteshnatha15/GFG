class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        helper(arr,ans,0,0);
        return ans;
    }
    void helper(vector<int>& arr, vector<int>& ans, int sum, int idx){
        if(idx==arr.size()){
            ans.push_back(sum);
            return;
        }
        helper(arr,ans,sum+arr[idx],idx+1);
        helper(arr,ans,sum,idx+1);
    }
};