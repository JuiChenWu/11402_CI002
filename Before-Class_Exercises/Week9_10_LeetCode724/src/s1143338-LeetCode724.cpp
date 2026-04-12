class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int &n:nums){
            sum+=n;
        }
        
        int Ls=0;
        for(int i=0;i<nums.size();++i){
            if(Ls==sum-Ls-nums[i]){
                return i;
            }
            Ls+=nums[i];
        }
        return -1;
    }
};