#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

const int MAXN=130;

inline bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second==b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}

signed main(){
    string S;
    bool f=true;
    while(getline(cin,S)){
        //if(S==""){break;}
        if(f){
            f=false;
        }else{
            cout<<'\n';
        }

        vector<pair<int,int>>dat;
        for(int i=0;i<MAXN;++i){
            dat.push_back({i,0});
        }
        for(char &c:S){
            ++dat[int(c)].second;
        }
        sort(dat.begin(),dat.end(),cmp);

        for(pair<int,int> &p:dat){
            if(p.second==0){continue;}

            cout<<p.first<<' '<<p.second<<'\n';
        }
    }
    return 0;
}
