class Solution {
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    public int maxMeetings(int start[], int end[]) {
        // add your code here
        List<List<Integer>> meetings = new ArrayList<>();
        for(int i=0;i<start.length;i++) {
            meetings.add(Arrays.asList(end[i], start[i]));
        }
        meetings.sort(Comparator.comparingInt(a -> a.get(0)));    
        int maxEnd = meetings.get(0).get(0);
        int ans = 1;
        for(int i = 1;i<meetings.size();i++){
            if(maxEnd < meetings.get(i).get(1)) {
                ans++;
                maxEnd = Math.max(maxEnd,meetings.get(i).get(0));

            }
        }
        return ans;
    }
}
