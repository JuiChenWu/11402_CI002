#include <cstdio>

#define int long long
using namespace std;

inline int read(){
    int x=0;
    char c=0;
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
}

signed main(){
    int T=read();
    for(int cases=1;cases<=T;++cases){
        int a=read(),b=read();

        if(!(a&1)){++a;}
        if(!(b&1)){--b;}

        int res=0;

        while(a<=b){
            res+=a;
            a+=2;
        }
        putchar('C');
        putchar('a');
        putchar('s');
        putchar('e');
        putchar(' ');
        write(cases);
        putchar(':');
        putchar(' ');
        write(res);
        putchar('\n');
    }
    return 0;
}
