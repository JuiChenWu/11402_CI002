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
//binary search answer
int N,M;
vector<int>dat;
vector<int>con;
signed main(){
    while(N=read()){
        M=read();
        dat.assign(N,0);
        con.assign(M,0);
        for(int i=0;i<N;++i){
            dat[i]=read();
        }
        //sort(dat.begin(),dat.end());

        int min_pos;
        for(int i=N-1;i>=0;--i){
            min_pos=0;
            for(int j=0;j<M;++j){
                if(con[j]==0){
                    con[j]=dat[i];
                    min_pos=-1;
                    break;
                }else{
                    if(con[min_pos] > con[j]){
                        min_pos=j;
                    }
                }
            }
            if(min_pos==-1){continue;}
            con[min_pos]+=dat[i];
        }
        min_pos=0;
        for(int i=0;i<M;++i){
            min_pos=max(min_pos,con[i]);
        }
        write(min_pos);
        putchar('\n');
    }
    return 0;
}
