class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){return false;}

        vector<vector<int>>::iterator itb=lower_bound(matrix.begin(),matrix.end(),target,[](const vector<int>&r, int val){
            return r.back() < val;
        });
        if(itb==matrix.end()){return false;}

        vector<int>::iterator ita=lower_bound(itb->begin(),itb->end(),target);
        return ita!=itb->end() && *ita==target;
    }
};