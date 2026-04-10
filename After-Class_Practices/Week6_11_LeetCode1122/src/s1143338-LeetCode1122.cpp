class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>tmp(arr2.size(),1);
        vector<int>res;
        for(int i=arr1.size()-1;i>=0;--i){
            for(int j=0;j<arr2.size();++j){
                if(arr1[i]==arr2[j]){
                    ++tmp[j];
                    break;
                }else if(j==arr2.size()-1){
                    res.emplace_back(arr1[i]);
                }
            }
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        for(int i=arr2.size()-1;i>=0;--i){
            while(--tmp[i]){
                res.emplace_back(arr2[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};