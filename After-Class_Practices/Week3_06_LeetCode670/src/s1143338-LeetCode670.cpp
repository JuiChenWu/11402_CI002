class Solution {
public:
    int maximumSwap(int num) {
        int dig[8],pos=-1;
        while(num){
            dig[++pos]=num%10;
            num/=10;
        }

        int max_pos;
        for(int i=pos;i>=0;--i){
            max_pos=i;
            for(int j=i-1;j>=0;--j){
                if((max_pos==i && dig[j]>dig[max_pos])||(max_pos!=i && dig[j]>=dig[max_pos])){
                    max_pos=j;
                }
            }
            if(max_pos!=i){
                swap(dig[i],dig[max_pos]);
                break;
            }
        }
        
        for(int i=pos;i>=0;--i){
            num=(num<<3)+(num<<1)+dig[i];
        }
        return num;
    }
};