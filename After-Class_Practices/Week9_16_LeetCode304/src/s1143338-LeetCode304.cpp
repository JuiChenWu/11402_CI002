class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>tmp;
        for(vector<int> &v:matrix){
            for(int &n:v){
                tmp.push_back(n);
            }
        }
        sort(tmp.begin(),tmp.end());
        return tmp[k-1];
    }
};