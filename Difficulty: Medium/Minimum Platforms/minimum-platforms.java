class Solution {
    public int minPlatform(int arr[], int dep[]) {
        //  code here
        int i = 0;
        int j = 0;
        int ans = 0;
        int temp = 0;
        Arrays.sort(arr);
        Arrays.sort(dep);
        
        while(i<arr.length && j<arr.length){
            if(arr[i]<=dep[j]){
                temp++;
                ans = Math.max(ans,temp);
                i++;
            } else {
                temp--;
                j++;
            }
        }
        return ans;
    }
}
