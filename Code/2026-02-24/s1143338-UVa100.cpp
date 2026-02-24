#include <cstdio>
#include <algorithm>

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
        x=(x<<3)+(x<<1)+(c-'0');
        c=getchar();
    }
    return x;
}
inline void write(int x){
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
}

signed main(){
    int i,j;
    while(i=read()){
        j=read();
        int N=min(i,j),M=max(i,j);
        int maxx=0,tmp=0,tmp_N;

        for(int i=N;i<=M;++i){
            tmp_N=i;
            tmp=1;
            while(tmp_N!=1){
                if(tmp_N & 1){
                    tmp_N=tmp_N*3+1;
                }else{
                    tmp_N/=2;
                }
                ++tmp;
            }
            maxx=max(maxx,tmp);
        }

        write(i);
        putchar(' ');
        write(j);
        putchar(' ');
        write(maxx);
        putchar('\n');
    }
    return 0;
}
