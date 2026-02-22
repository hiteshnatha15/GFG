// User function Template for Java//User function Template for Java
class Solution {
    private void helper(int[] arr, ArrayList<Integer> ans, int sum, int idx) {
        ans.add(sum);
        for(int i = idx;i<arr.length;i++){
            helper(arr,ans,sum+arr[i],i+1);
        }
    }
    public ArrayList<Integer> subsetSums(int[] arr) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        helper(arr,ans,0,0);
        return ans;
    }
}