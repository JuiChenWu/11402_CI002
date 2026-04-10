class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pos=0,res=0;
        for(int i=0;i<prices.size();++i){
            if(prices[i] < prices[min_pos]){
                min_pos=i;
            }
            if(i > min_pos && prices[i]-prices[min_pos] > res){
                res=prices[i]-prices[min_pos];
            }
        }
        return res;
    }
};