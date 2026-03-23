class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>res(matrix.begin(),matrix.end());

        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix.size();++j){
                res[j][matrix.size()-1-i]=matrix[i][j];
            }
        }
        matrix.assign(res.begin(),res.end());
    }
};