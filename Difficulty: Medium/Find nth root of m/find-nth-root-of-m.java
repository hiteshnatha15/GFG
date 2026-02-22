class Solution {
    public int nthRoot(int n, int m) {
        // code here
        int left = 0;
        int right = m;
        while(left<=right){
            int mid = (left+right)/2;
            if(Math.pow(mid,n) == m)
                return mid;
            else if(Math.pow(mid,n) < m)
                left=mid+1;
            else
                right=mid-1;
        }
        return -1;
    }
}