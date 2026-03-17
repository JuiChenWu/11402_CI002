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
        if((c>='a' && c<='z')||(c>='A' && c<='Z')){return int(c);}
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
const int MAXN=105;
int mp[MAXN][MAXN];
int T,M,N,Q,x,y,res;
bool f;

signed main(){
    T=read();
    while(T--){
        M=read();N=read();Q=read();

        for(int i=0;i<M;++i){
            for(int j=0;j<N;++j){
                mp[i][j]=read();
            }
        }

        write(M);
        putchar(' ');
        write(N);
        putchar(' ');
        write(Q);
        putchar('\n');

        while(Q--){
            y=read();x=read();f=false;

            for(res=1;res<1000;++res){
                for(int i=y-res;i<=y+res;++i){
                    for(int j=x-res;j<=x+res;++j){
                        if(i<0 || i>=M || j<0 || j>=N){f=true;break;}
                        if(mp[i][j]!=mp[y][x]){f=true;break;}
                    }
                    if(f){break;}
                }
                if(f){break;}
            }
            write((res-1)*2+1);
            putchar('\n');
        }
    }
    return 0;
}
/*
1
7 10 4
abbbaaaaaa
abbbaaaaaa
abbbaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaccaaaaaa
aaccaaaaaa
1 2
2 4
4 6
5 2
*/
