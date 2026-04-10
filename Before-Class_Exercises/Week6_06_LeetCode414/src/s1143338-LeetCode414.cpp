class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long f=LONG_MIN,s=LONG_MIN,t=LONG_MIN;
        for(int &n:nums){
            if(n>f){
                t=s;
                s=f;
                f=n;
            }else if(n>s && n<f){
                t=s;
                s=n;
            }else if(n>t && n<s){
                t=n;
            }
        }
        return (t==LONG_MIN || t==s)?f:t;
    }
};