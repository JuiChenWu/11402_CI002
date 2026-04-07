#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

inline int read(){
    int x=0,w=1,c=0;
    while(c<'0' || c>'9'){
        c=getchar();
        if(c=='-'){w=-1;}
        if(c==-1){return 0;}
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

int N,Q,cases=0,tmp;
vector<int>dat;
signed main(){
    while(true){
        N=read();Q=read();
        if(N+Q==0){break;}

        dat.assign(N,0);
        for(int i=0;i<N;++i){
            dat[i]=read();
        }
        sort(dat.begin(),dat.end());

        printf("CASE# %d:\n",++cases);
        while(Q--){
            tmp=read();
            auto fd=lower_bound(dat.begin(),dat.end(),tmp);
            if(*fd==tmp){
                printf("%d found at %d\n",tmp,fd-dat.begin()+1);
            }else{
                printf("%d not found\n",tmp);
            }
        }
    }
    return 0;
}
