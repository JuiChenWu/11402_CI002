#include <cstdio>
#include <vector>
#include <algorithm>

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
//-block
vector<int>dat;
int N,M;

inline bool cmp(int &a,int &b){
    int am,bm;
    if(a<0){
        am=a%(-M);
    }else{
        am=a%M;
    }
    if(b<0){
        bm=b%(-M);
    }else{
        bm=b%M;
    }

    printf("%d -> %d\n",a,am);
    printf("%d -> %d\n",b,bm);

    if(am==bm){
        if(a%2==1 && b%2==1){
            return a>b;
        }else if(a%2==0 && b%2==0){
            return a<b;
        }else if(a%2==1 && b%2==0){
            return true;
        }else if(a%2==0 && b%2==1){
            return false;
        }
    }
    return am<bm;
}

signed main(){
    while(true){
        N=read();M=read();
        if(N==0 && M==0){break;}

        dat.assign(N,0);
        for(int i=0;i<N;++i){
            dat[i]=read();
        }
        sort(dat.begin(),dat.end(),cmp);

        write(N);putchar(' ');write(M);putchar('\n');
        for(int i=0;i<N;++i){
            write(dat[i]);
            putchar('\n');
        }
    }
    putchar('0');
    putchar(' ');
    putchar('0');
    return 0;
}
