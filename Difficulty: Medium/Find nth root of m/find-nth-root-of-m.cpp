class Solution {
  public:
    int nthRoot(int n, int m) {
        int left = 0;
        int right = m;
        while(left<=right){
            int mid = (left+right)/2;
            long long temp = pow(mid,n);
            if(temp==m)
                return mid;
            else if(temp>m)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};