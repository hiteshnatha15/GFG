class Solution {
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    public int maxMeetings(int start[], int end[]) {
        // add your code here
        int[][] arr = new int[start.length][2];
        for(int i = 0;i<start.length;i++){
            arr[i] = new int[]{end[i],start[i]};
        }
        Arrays.sort(arr,(a,b)->Integer.compare(a[0],b[0]));
        int maxEnd = arr[0][0];
        int ans = 1;
        for(int i=1;i<arr.length;i++){
            if(arr[i][1] > maxEnd){
                ans++;
                maxEnd = Math.max(maxEnd,arr[i][0]);
            }
        }
        return ans;
    }
}
