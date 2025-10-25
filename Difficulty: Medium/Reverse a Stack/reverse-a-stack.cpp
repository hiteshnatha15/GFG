class Solution {
  public:
    void helper(stack<int> &st, int temp){
        if(st.empty()){
            st.push(temp);
            return;
        }
        int val=st.top();
        st.pop();
        helper(st,temp);
        st.push(val);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(!st.empty()){
            int temp =st.top();
            st.pop();
            reverseStack(st);
            helper(st,temp);
        }
    }
};