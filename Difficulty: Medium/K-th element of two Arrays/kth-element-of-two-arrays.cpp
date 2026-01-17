class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int i=0;
        int j=0;
        int cnt=1;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                if(cnt==k)
                    return a[i];
                i++;
                cnt++;

            } else {
                if(cnt==k)
                    return b[j];
                j++;
                cnt++;
            }
        }
        while(i<a.size()){
            if(cnt==k)
                return a[i];
            i++;
            cnt++;    
        }
        
        while(j<b.size()){
            if(cnt==k)
                return b[j];
            j++;
            cnt++;    
        }
        return -1;
    }
};