class Solution {
public:
    int myAtoi(string s) {
        int sz=s.size(),w=1,pos=0;
        long long res=0;

        for(;pos<sz;++pos){
            if(s[pos]==' '){continue;}
            if(s[pos]=='+'){break;}
            if(s[pos]=='-'){w=-1;break;}
            if(s[pos]>='0'&&s[pos]<='9'){res=s[pos]-'0';break;}
            return 0;
        }
        ++pos;
        for(;pos<sz;++pos){
            if(s[pos]<'0'||s[pos]>'9'){break;}
            res=(res<<3)+(res<<1)+s[pos]-'0';

            if(res > INT_MAX){
                if(w==1){return INT_MAX;}
                return INT_MIN;
            }
        }
        return w*(int)res;
    }
};