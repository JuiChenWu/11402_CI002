#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

inline bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

signed main(){
    string S;
    int N;
    while(cin>>N){
        cin.ignore();
        vector<pair<int,int>>dat;
        for(int i=0;i<26;++i){
            dat.push_back({i,0});
        }
        while(N--){
            getline(cin,S);
            for(char &c:S){
                if(c>='a' && c<='z'){
                    ++dat[c-'a'].second;
                }else if(c>='A' && c<='Z'){
                    ++dat[c-'A'].second;
                }
            }
        }
        sort(dat.begin(),dat.end(),cmp);

        for(auto it=dat.begin();it!=dat.end();++it){
            if(it->second == 0){break;}
            cout<< char(it->first+'A') << ' ' << it->second << '\n';
        }
        cout<< '\n';
    }
    return 0;
}
/*
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?
*/
