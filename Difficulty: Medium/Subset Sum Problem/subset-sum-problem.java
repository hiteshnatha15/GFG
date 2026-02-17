class Solution {
    static Boolean helper(int arr[], int sum, int total, int idx){
        if(sum==total)
            return true;
        if(sum < total)
            return false;
        for(int i = idx; i < arr.length;i++){
            if(helper(arr,sum,total + arr[i],i+1))
                return true;
        }
        return false;
    }
    static Boolean isSubsetSum(int arr[], int sum) {
        // code here
        return helper(arr,sum,0,0);
    }
}