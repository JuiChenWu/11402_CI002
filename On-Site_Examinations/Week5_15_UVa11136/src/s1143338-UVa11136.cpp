#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")

#include <cstdio>
#include <unordered_map>

#define int long long
using namespace std;

inline int read(){
    int x=0,w=1;
    char c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c=='-'){w=-1;}
        if(c==-1){return 0;}
    }
    while(c>='0' && c<='9'){
        x=(x<<3)+(x<<1)+c-'0';
        c=getchar();
    }
    return x*w;
}
inline void write(int x){
    if(x<0){putchar('-');x=-x;}
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
    return;
}// O(N)/search
signed main(){
    int T;
    while(T=read()){
        int res=0;
        unordered_map<int,int>dat;
        while(T--){
            int N=read();
            while(N--){
                int tmp=read();
                if(dat[tmp]<0){
                    dat[tmp]=1;
                }else{
                    ++dat[tmp];
                }
            }

            int maxx=0,minn=1e9;
            for(auto it=dat.begin();it!=dat.end();++it){
                if(it->second <= 0){
                    it->second=0;
                    continue;
                }

                if(it->first > maxx){
                    maxx=it->first;
                }
                if(it->first < minn){
                    minn=it->first;
                }
            }


            --dat[maxx];
            --dat[minn];
            res+=maxx-minn;
        }
        write(res);
        putchar('\n');
    }
    return 0;
}
