// User function Template for Java

class Solution {
    public int longestSubarray(int[] arr, int k) {
        // code here
        Map<Integer,Integer> mp = new HashMap<>();
        int sum = 0;
        int ans = 0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
            if(sum==k)
                ans = i+1;
            if(mp.containsKey(sum-k))
                ans = Math.max(ans,i-mp.get(sum-k));
            if(!mp.containsKey(sum))
                mp.put(sum,i);
        }
        return ans;
    }
}
