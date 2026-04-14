#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

signed main(){
    int N;

    cin>>N;
    cin.ignore();cin.ignore();
    while(N--){
        string S;
        int tot=0;
        map<string,int>mp;

        while(getline(cin,S)){
            if(S==""){break;}

            ++tot;
            ++mp[S];
        }

        for(map<string,int>::iterator it=mp.begin();it!=mp.end();++it){
            cout<<it->first<<' '<<fixed<<setprecision(4)<<(double)it->second*100/tot<<'\n';
        }
        if(N){cout<<'\n';}
    }
    return 0;
}
