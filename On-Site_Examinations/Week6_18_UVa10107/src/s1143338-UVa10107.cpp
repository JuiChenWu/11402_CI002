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
    if(x>=10){write(x/10);}
    putchar(x%10+'0');
}
signed main(){
    vector<int>dat;
    int N;
    while(N=read()){
        dat.emplace_back(N);
        sort(dat.begin(),dat.end());
        if(dat.size() & 1){
            write(dat[dat.size()>>1]);
        }else{
            write((dat[dat.size()>>1]+dat[(dat.size()>>1)-1])>>1);
        }
        putchar('\n');
    }

    return 0;
}
