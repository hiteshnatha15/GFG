class Solution {
    class Pair {
        double ratio;
        int weight;
        Pair(double ratio,int weight){
            this.ratio = ratio;
            this.weight = weight;
        }
    }
    public double fractionalKnapsack(int[] val, int[] wt, int capacity) {
        // code here
        List<Pair> temp = new ArrayList<>();
        for(int i=0;i<val.length;i++) {
            temp.add(new Pair((double) val[i] / wt[i], wt[i]));
        }
        temp.sort((a,b) -> Double.compare(b.ratio,a.ratio));
        double ans = 0;
        int bhoja = 0;
        for(int i = 0;i < temp.size();i++){
            if(temp.get(i).weight + bhoja <= capacity){
                ans+= temp.get(i).weight*temp.get(i).ratio;
                bhoja+=temp.get(i).weight;
            } else{
                int rem = capacity - bhoja;
                ans += temp.get(i).ratio * rem;
                break;
            }
        }
        return ans;
    }
}