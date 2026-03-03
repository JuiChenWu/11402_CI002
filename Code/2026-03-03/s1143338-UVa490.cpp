#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int max(int a,int b){
    if(a>b){return a;}
    return b;
}

signed main(){
    char dat[100][100];
    for(int i=0;i<100;++i){
        for(int j=0;j<100;++j){
            dat[i][j]=' ';
        }
    }
    string s;
    int i=0,maxx=0;
    while(getline(cin,s)){
        maxx=max(maxx,s.size());

        for(int j=0;j<s.size();++j){
            dat[i][j]=s[j];
        }
        ++i;
    }

    for(int j=0;j<maxx;++j){
        for(int k=i-1;k>=0;--k){
            cout<<dat[k][j];
        }
        cout<<'\n';
    }
    //cout<<'\n';

    return 0;
}
/*
Rene Decartes once said,
"I think, therefore I am."
*/
