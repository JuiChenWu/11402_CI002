#include <cstdio>
#include <vector>

#define int long long
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
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
}

int N,res;
bool start;
inline void dfs(int cur){
    if(cur<N){dfs(cur<<1);}

    if(N>=cur){
        start=true;
        putchar('1');
        N-=cur;
        ++res;
    }else if(start){
        putchar('0');
    }
    return;
}

signed main(){

    while(N=read()){
        start=false;
        res=0;
        printf("The parity of ");
        dfs(1);
        printf(" is %d (mod 2).\n",res);
    }
    return 0;
}
