#include <cstdio>
#include <vector>
#include <algorithm>

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
}
signed main(){
    int T=read();
    while(T--){
        int N=read();
        vector<int>dat(N);
        for(int i=0;i<N;++i){
            dat[i]=read();
        }

        int res=0;
        for(int i=0;i<N-1;++i){
            for(int j=i+1;j<N;++j){
                if(dat[i] > dat[j]){
                    swap(dat[i],dat[j]);
                    ++res;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",res);
    }
    return 0;
}
