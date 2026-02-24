class Solution {
    static ArrayList<Integer> nextSmallerEle(int[] arr) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>(Collections.nCopies(arr.length,-1));
        Stack<Integer> st = new Stack<>();
        
        for(int i = arr.length - 1; i >= 0; i--){
            while(!st.empty() && st.peek() >= arr[i])
                st.pop();
            if(!st.empty())
                ans.set(i,st.peek());
            st.push(arr[i]);
        }
        return ans;
    }
}