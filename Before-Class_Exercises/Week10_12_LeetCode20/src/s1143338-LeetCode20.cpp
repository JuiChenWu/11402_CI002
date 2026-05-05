class Solution {
public:
    bool isValid(string s) {
        stack<char>sk;
        for(char &c:s){
            if(c==')'){
                if(!sk.empty()){
                    if(sk.top()=='('){
                        sk.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else if(c==']'){
                if(!sk.empty()){
                    if(sk.top()=='['){
                        sk.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else if(c=='}'){
                if(!sk.empty()){
                    if(sk.top()=='{'){
                        sk.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else{
                sk.emplace(c);
            }
        }
        return sk.empty();
    }
};