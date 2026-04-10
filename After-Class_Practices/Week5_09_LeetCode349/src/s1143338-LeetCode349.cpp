class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool vis[1001]={false};
        vector<int>res;

        for(int &n1:nums1){
            if(vis[n1]){continue;}
            for(int &n2:nums2){
                if(vis[n2]){continue;}
                if(n1==n2){
                    res.emplace_back(n1);
                    vis[n1]=true;
                    break;
                }
            }
        }
        return res;
    }
};