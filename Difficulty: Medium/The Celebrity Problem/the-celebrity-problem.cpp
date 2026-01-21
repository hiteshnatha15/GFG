class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int celeb = 0;
        int audi = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i!=j){
                    celeb +=mat[i][j];
                    audi += mat[j][i];
                }
            }
            if(celeb == 0 && audi == mat.size()-1)
                return i;
            celeb = 0;
            audi = 0;
        }
        return -1;
    }
};