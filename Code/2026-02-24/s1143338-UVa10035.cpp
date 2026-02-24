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
    int N,M;
    while(true){
        N=read();M=read();
        if(N==0 && M==0){break;}

        int dN[10]={0},dM[10]={0},pt;

        pt=-1;
        while(N){
            dN[++pt]=N%10;
            N/=10;
        }
        pt=-1;
        while(M){
            dM[++pt]=M%10;
            M/=10;
        }

        int cnt=0;
        for(int i=0;i<10;++i){
            dN[i]+=dM[i];
            if(dN[i]>=10){
                ++cnt;
                if(i!=9){
                    ++dN[i+1];
                }
            }
        }

        if(cnt==0){
            printf("No carry operation.\n");
        }else if(cnt==1){
            printf("1 carry operation.\n");
        }else{
            printf("%d carry operations.\n",cnt);
        }
    }
    return 0;
}
