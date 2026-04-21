#pragma GCC optimize("Ofast,unroll-loops,fast-math,no-stack-protector")
#include <cstdio>
#include <memory.h>

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
inline int min(const int &a,const int &b){
    return a<b?a:b;
}

const int MAXN=100000000+5;
int N,M,tmp,dp[MAXN];

signed main(){
    while(N=read()){
        M=read();
        memset(dp,0,sizeof(dp));
        for(int i=0;i<N;++i){
            tmp=read();
            for(int j=M-tmp;j>=0;--j){
                if(dp[j]!=0){
                    dp[j+tmp]=min(dp[j+tmp],dp[j]+1);
                }
            }
            dp[tmp]=1;
        }

        if(dp[M]!=0){
            write(dp[M]);
        }else{
            putchar('0');
        }
        putchar('\n');
    }
    return 0;
}
