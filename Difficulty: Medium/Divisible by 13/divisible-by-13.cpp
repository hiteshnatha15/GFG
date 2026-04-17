class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int num = 0;
        for(auto it:s){
            num*=10;
            num = (num + it - '0')  % 13;
        }
        return ((num % 13 )==0 )? true : false;
    }
};