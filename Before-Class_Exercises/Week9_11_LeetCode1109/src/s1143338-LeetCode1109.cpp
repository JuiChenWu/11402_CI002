class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>pfs(n);
        for(vector<int> &v:bookings){
            pfs[v[0]-1]+=v[2];
            if(v[1]<n){
                pfs[v[1]]-=v[2];
            }
        }
        vector<int>res(n);
        for(int i=0;i<n;++i){
            if(i==0){
                res[i]=pfs[i];
                continue;
            }
            res[i]=res[i-1]+pfs[i];
        }
        return res;
    }
};