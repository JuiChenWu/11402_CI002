#include <cstdio>
#include <queue>

using namespace std;

inline int read(){
    int x=0,c=0,w=1;
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

queue<int>Q;
int N;
signed main(){
    while(N=read()){
        for(int i=1;i<=N;++i){
            Q.push(i);
        }

        printf("Discarded cards:");
        bool out=true,f=true;
        while(Q.size()!=1){
            if(out){
                out=false;

                if(f){
                    f=false;
                }else{
                    putchar(',');
                }

                putchar(' ');
                write(Q.front());
                Q.pop();
            }else{
                out=true;
                Q.push(Q.front());
                Q.pop();
            }
        }
        printf("\nRemaining card: %d\n",Q.front());
        Q.pop();
    }
    return 0;
}
