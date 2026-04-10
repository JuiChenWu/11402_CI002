class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if (n==0){return -1;}

        int Ls=0,Rs=n-1;
        while(Ls<Rs){
            int mid=(Ls+Rs)>>1;
            if(nums[mid]>nums[Rs]){
                Ls=mid+1;
            }else{
                Rs=mid;
            }
        }
        int rt=Ls;

        Ls=0;Rs=n-1;
        while(Ls<=Rs){
            int mid=(Rs+Ls)>>1;
            
            int real_mid=(mid+rt)%n; 

            if(nums[real_mid]==target){return real_mid;}
            
            if(nums[real_mid] < target){
                Ls=mid+1;
            }else{
                Rs=mid-1;
            }
        }
        return -1;
    }
};