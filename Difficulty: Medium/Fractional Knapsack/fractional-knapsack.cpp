class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,int>> v;
        for(int i=0;i<val.size();i++){
            v.push_back({(double)val[i]/wt[i],wt[i]});
        }
        sort(v.rbegin(), v.rend());

        double value=0;
        int weight=0;
        for(auto it: v){
            if(weight+it.second<=capacity){
                value+=it.first*it.second;
                weight+=it.second;
            }
            else {
                value+=it.first*(capacity-weight);
                break;
            }
        }
        return value;
    }
};
