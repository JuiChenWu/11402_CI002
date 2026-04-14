#include <cstdio>
#include <math.h>
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
    int N,M;
    while(true){
        N=read();M=read();
        if(N==0 && M==0){break;}

        int res=floor(sqrt(M))-ceil(sqrt(N))+1;
        write(res);
        putchar('\n');
    }
    return 0;
}
