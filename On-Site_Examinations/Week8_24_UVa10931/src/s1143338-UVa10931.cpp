#include <cstdio>

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

int N,res;

signed main(){
    while(N=read()){
        res=0;
        int po=0,num=1;

        while(N>=num){
            ++po;
            num*=2;
        }
        num/=2;


        printf("The parity of ");

        while(po--){
            if(N>=num){
                putchar('1');
                N-=num;
                ++res;
            }else{
                putchar('0');
            }
            num/=2;
        }

        printf(" is %d (mod 2).\n",res);
    }
    return 0;
}
