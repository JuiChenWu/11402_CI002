#pragma GCC optimize("Ofast,fast-math,unroll-loops")

#include <cstdio>

using namespace std;

inline int read(){
    int x=0,w=1;
    char c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c==-1){return 0;}
        if(c=='-'){w=-1;}
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
}

signed main(){
    int N,res,bot;
    while(N=read()){
        res=0;bot=0;
        while(N){
            --N;
            ++bot;
            ++res;
            if(bot==3){
                bot=0;
                ++N;
            }
        }
        if(bot==2){++res;}
        write(res);
        putchar('\n');
    }
    return 0;
}
