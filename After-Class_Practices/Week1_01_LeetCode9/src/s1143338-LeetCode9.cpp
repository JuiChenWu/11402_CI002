class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int dat[35],pt=-1;
        while(x){
            dat[++pt]=x%10;
            x/=10;
        }
        for(int i=0;i<(pt+1)/2;++i){
            if(dat[i]!=dat[pt-i]){
                return false;
            }
        }
        return true;
    }
};