#include <cstdio>
#include <vector>
#include <iostream>

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

int N;
bool fir=true;
signed main(){
    while(N=read()){
        if(fir){
            fir=false;
        }else{
            putchar('\n');
        }

        while(true){
            bool f=true;
            vector<int>ans(N);
            for(int i=0;i<N;++i){
                ans[i]=read();
                if(ans[i]==0){f=false;break;}
            }
            if(!f){break;}

            vector<int>tmp;
            int ans_p=0;
            f=true;

            for(int i=1;i<=N && f;++i){
                if(i==ans[ans_p]){
                    ++ans_p;
                }else{
                    if(tmp.empty()){
                        tmp.push_back(i);
                    }else if(tmp.back()==ans[ans_p]){
                        tmp.pop_back();
                        ++ans_p;
                        --i;
                    }else{
                        tmp.push_back(i);
                    }
                }
                //cout<<"i:"<<i<<",ans_p:"<<ans_p<<'\n';
            }
            while(f && !tmp.empty()){
                if(ans[ans_p]==tmp.back()){
                    ++ans_p;
                    tmp.pop_back();
                }else{
                    f=false;
                }
                //cout<<"pop.ans_p:"<<ans_p<<'\n';
            }


            if(f&&tmp.empty()){
                putchar('Y');
                putchar('e');
                putchar('s');
            }else{
                putchar('N');
                putchar('o');
            }
            putchar('\n');
        }
    }
	return 0;
}
