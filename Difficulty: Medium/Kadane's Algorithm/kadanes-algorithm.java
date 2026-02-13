class Solution {
    int maxSubarraySum(int[] arr) {
        // Code here
        int ans = Integer.MIN_VALUE;
        int temp = 0;
        for(int i = 0; i<arr.length; i++){
            temp+=arr[i];
            ans = Math.max(ans,temp);
            if(temp<0)
                temp=0;
        }
        return ans;
    }
}
