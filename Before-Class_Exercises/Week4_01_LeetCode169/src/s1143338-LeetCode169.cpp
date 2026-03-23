#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &n:nums){
            ++mp[n];
        }
        int maxx=0,maxx_id=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second > maxx){
                maxx=it->second;
                maxx_id=it->first;
            }
        }

        return maxx_id;
    }
};