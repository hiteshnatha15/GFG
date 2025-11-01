class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int k=0;
        while(n){
            k+=n&1;
            n=n>>1;
        }
        return k;
    }
};