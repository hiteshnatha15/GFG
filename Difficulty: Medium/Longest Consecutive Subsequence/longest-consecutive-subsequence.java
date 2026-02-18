class Solution {

    // Function to return length of longest subsequence of consecutive integers.
    public int longestConsecutive(int[] arr) {
        // code here
        Set<Integer> st = new HashSet<>();
        int longest = 1;
        for(int num : arr)
            st.add(num);
        
        for(int num : st) {
            if(!st.contains(num-1)) {
                int currentNum = num;
                int count = 0 ;
                while(st.contains(currentNum)){
                    currentNum++;
                    count++;
                }
                longest = Math.max(count,longest);
            }
        }
        return longest;
    }
}