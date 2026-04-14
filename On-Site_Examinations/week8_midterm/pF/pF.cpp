#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#include <cstdio>
#include <vector>
#include <algorithm>

#define int long long
using namespace std;

inline int read(){
    int x=0,c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c==-1){return 0;}
    }
    while(c>='0'&&c<='9'){
        x=(x<<3)+(x<<1)+c-'0';
        c=getchar();
    }
    return x;
}
inline void write(int x){
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
    return;
}
//-block
vector<int>dat;
int res,N;
signed main(){
    while(N=read()){
        dat.clear();
        res=0;

        dat.push_back(read());
        for(int i=1;i<N;++i){
            int tmp=read();

            vector<int>::iterator pos=lower_bound(dat.begin(),dat.end(),tmp);

            res+=dat.end()-pos;
            dat.insert(pos,tmp);
        }
        write(res);
        putchar('\n');
    }
    return 0;
}
