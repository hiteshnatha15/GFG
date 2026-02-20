class Solution {
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    public int maxMeetings(int start[], int end[]) {
        // add your code here
        List<int[]> list = new ArrayList<>();
        for(int i=0;i<start.length;i++){
            list.add(new int[]{end[i],start[i]});
        }
        Collections.sort(list,(a,b)->a[0]-b[0]);
        int ans = 1;
        int maxEnd = list.get(0)[0];
        for(int i = 1;i<list.size();i++){
            if(maxEnd < list.get(i)[1]){
                maxEnd = Math.max(maxEnd,list.get(i)[0]);
                ans++;
            }
        }
        return ans;
    }
}
