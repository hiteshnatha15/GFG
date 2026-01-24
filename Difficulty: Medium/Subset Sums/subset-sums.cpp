class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        helper(arr,ans,0,0);
        return ans;
    }
    void helper(vector<int>& arr, vector<int>& ans, int sum, int idx){
        ans.push_back(sum);
        for(int i=idx;i<arr.size();i++){
            helper(arr,ans,sum+arr[i],i+1);
        }
    }
};