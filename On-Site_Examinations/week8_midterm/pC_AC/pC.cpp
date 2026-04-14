#include <cstdio>

#define int long long
using namespace std;

inline int read(){
    int x=0,w=1,c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c==-1){return 0;}
        if(c=='-'){w=-1;}
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
    return;
}
signed main(){
    int N;
    while(N=read()){
        int nxt;
        while(N>=10){
            nxt=0;
            while(N){
                nxt+=N%10;
                N/=10;
            }
            N=nxt;
            //write(N);putchar('\n');
        }
        write(N);
        putchar('\n');
    }
    return 0;
}
