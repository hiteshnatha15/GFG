class Solution {
  public:
   void helper(stack<int> &st, int temp){
       if(st.empty() || st.top()<=temp){
           st.push(temp);
           return;
       }
       int top = st.top();
       st.pop();
       helper(st,temp);
       st.push(top);
       return;
   }
    void sortStack(stack<int> &st) {
        // code here
        if(!st.empty()){
            int temp = st.top();
            st.pop();
            sortStack(st);
            helper(st,temp);
        }
    }
};
