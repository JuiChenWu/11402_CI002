#pragma("Ofast,unroll-loops,fast-math,no-stack-protector")
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

#define int long long
using namespace std;

inline int read(){
    int x=0,w=1,c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c=='-'){w=-1;}
        if(c==-1){return 0;}
    }
    while(c>='0'&&c<='9'){
        x=(x<<3)+(x<<1)+c-'0';
        c=getchar();
    }
    return x*w;
}
inline void write(int x){
    if(x<0){putchar('-');x=-x;}
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
}
signed main(){
    int T=read(),N,M;

    while(T--){
        N=read();M=read();
        vector<pair<bool,int>>dat;
        for(int i=0;i<N;++i){
            dat.push_back({false,read()});
        }
        for(int i=0;i<M;++i){
            dat.insert(dat.begin()+i+read(),{true,i});
        }

        vector<int>us;
        for(vector<pair<bool,int>>::iterator it=dat.begin();it!=dat.end();++it){
            if(!it->first){
                if(us.size()==0){
                    us.emplace_back(it->second);
                }else{
                    for(int i=0;i<us.size();++i){
                        if(it->second < us[i]){
                            us.insert(us.begin()+i,it->second);
                            break;
                        }else if(i==us.size()-1){
                            us.emplace_back(it->second);
                            break;
                        }
                    }
                }
            }else{
                write(us[it->second]);
                putchar('\n');
            }
        }
        if(T){putchar('\n');}
    }

    return 0;
}
