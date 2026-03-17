class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1){return s;}

        vector<vector<char>>dat(numRows,vector<char>());

        int d=1,pos=0;
        for(char &c:s){
            dat[pos].push_back(c);

            pos+=d;
            if(pos==numRows-1 || pos==0){
                d=-d;
            }
        }
        string res="";
        for(int i=0;i<numRows;++i){
            for(char &c:dat[i]){
                res+=c;
            }
        }
        return res;
    }
};