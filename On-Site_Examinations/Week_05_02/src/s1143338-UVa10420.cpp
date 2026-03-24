#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

inline string clean(string &s){
    string res="";
    for(char &c:s){
        if(c==' '){break;}
        res+=c;
    }
    return res;
}
signed main(){
    int N;
    while(cin>>N){
        cin.ignore();
        string s1;
        vector<pair<string,int>>mp;
        while(N--){
            getline(cin,s1);
            s1=clean(s1);

            if(mp.size()==0){
                mp.push_back({s1,1});
                continue;
            }
            for(int i=0;i<mp.size();++i){
                if(mp[i].first==s1){
                    ++mp[i].second;
                    break;
                }else if(i==mp.size()-1){
                    mp.push_back({s1,1});
                    break;
                }
            }
        }
        sort(mp.begin(),mp.end());

        for(auto it=mp.begin();it!=mp.end();++it){
            cout<< it->first << ' ' << it->second << '\n';
        }
        //cout<< '\n';
    }
    return 0;
}
