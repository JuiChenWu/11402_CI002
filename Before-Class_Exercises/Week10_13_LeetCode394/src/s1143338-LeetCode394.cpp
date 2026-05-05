class Solution {
public:
    string decodeString(string s) {
        stack<int>countStack;
        stack<string>stringStack;
        string res = "";
        int cnt=0;

        for(char &c:s){
            if(isdigit(c)){
                cnt=(cnt<<3)+(cnt<<1)+(c-'0');
            }else if(c=='['){
                countStack.push(cnt);
                stringStack.push(res);
                res="";
                cnt=0;
            }else if(c==']'){
                string tmp=res;
                res=stringStack.top();
                stringStack.pop();
                
                int T=countStack.top();
                countStack.pop();
                
                while(T--){
                    res+=tmp;
                }
            }else{
                res+=c;
            }
        }
        return res;
    }
};