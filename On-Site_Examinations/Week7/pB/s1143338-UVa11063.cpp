#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>

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
    if(x<0){putchar('-');x=-x;}
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
    return;
}

int N,tmp,cases=0;
bool isb;
set<int>dat;
vector<int>q;
signed main(){
    while(N=read()){
        if(cases){putchar('\n');}
        dat.clear();
        q.assign(N,0);
        isb=true;

        for(int i=0;i<N;++i){
            q[i]=read();
            if(q[i]<1){isb=false;}
        }

        for(int i=0;i<N && isb;++i){
            for(int j=i;j<N && isb;++j){
                if(i<j && q[j]<=q[i]){isb=false;break;}
                int num=q[i]+q[j];
                if(dat.count(num)){
                    isb=false;
                }else{
                    dat.insert(num);
                }
            }
        }

        if(isb){
            printf("Case #%d: It is a B2-Sequence.\n",++cases);
        }else{
            printf("Case #%d: It is not a B2-Sequence.\n",++cases);
        }
    }
    return 0;
}
