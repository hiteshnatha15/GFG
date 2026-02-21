class Solution {
    public int minPlatform(int arr[], int dep[]) {
        //  code here
        int ans = 0;
        int j=0;
        int i=0;
        int count = 0;
        Arrays.sort(arr);
        Arrays.sort(dep);
        
        while(i<arr.length && j<arr.length){
            if(arr[i]<=dep[j]){
                count++;
                ans=Math.max(ans,count);
                i++;
            } else{
                count--;
                j++;
            }
        }
        return ans;
    }
}
