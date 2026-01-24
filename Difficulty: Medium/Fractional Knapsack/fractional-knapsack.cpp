class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,int>> v;
        int weight=0;
        double profit=0;
        for(int i=0;i<val.size();i++){
            v.push_back({(double)val[i]/wt[i], wt[i]});
        }
        sort(v.rbegin(),v.rend());
        
        for(auto it: v){
            if(it.second + weight <= capacity){
                weight+=it.second;
                profit+=(it.first*it.second);
            } else {
                profit+=((capacity-weight)*it.first);
                break;
            }
        }
        return profit;
    }
};
