class Solution {
    private void helper(Stack<Integer> st, int temp){
        if(st.empty() || st.peek()<=temp){
            st.push(temp);
            return;
        }
        int val = st.peek();
        st.pop();
        helper(st,temp);
        st.push(val);
        return;
    }
    public void sortStack(Stack<Integer> st) {
        // code here
        while(st.empty()){
            return;
        }
        int temp = st.peek();
        st.pop();
        sortStack(st);
        helper(st,temp);
        return;
    }
}