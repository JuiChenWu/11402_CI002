#pragma GCC optimize("Ofast,fast-math,unroll-loops")

#include <iostream>
#include <memory.h>
#include <string>

using namespace std;

signed main(){
    int T,N,A,res,dat[101];
    cin>>T;
    while(T--){
        res=0;memset(dat,0,sizeof(dat));
        cin>>N;
        for(int i=1;i<=N;++i){
            string S;
            cin>>S;
            if(S=="SAME"){
                cin>>S>>A;
                dat[i]=dat[A];
                res+=dat[i];
            }else if(S=="LEFT"){
                --res;
                dat[i]=-1;
            }else if(S=="RIGHT"){
                ++res;
                dat[i]=1;
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}
