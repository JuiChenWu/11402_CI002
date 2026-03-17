class Solution {
public:
    bool isPalindrome(string s) {
        string tmp="";
        for(char &c:s){
            if((c>='a'&&c<='z')||(c>='0'&&c<='9')){
                tmp+=c;
            }else if(c>='A'&&c<='Z'){
                tmp+=c-'A'+'a';
            }
        }
        for(int i=0;i<tmp.size()/2;++i){
            if(tmp[i]!=tmp[tmp.size()-1-i]){return false;}
        }
        return true;
    }
};
