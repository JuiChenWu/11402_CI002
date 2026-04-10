class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it=lower_bound(nums.begin(),nums.end(),target);
        if(it==nums.end() || *it!=target){
            return -1;
        }else{
            return it-nums.begin();
        }
    }
};