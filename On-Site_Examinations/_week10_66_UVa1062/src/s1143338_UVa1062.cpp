#include <iostream>
#include <string>
#include <memory.h>

using namespace std;

//ACMICPC
//ACCIMPC
//ACCCMPI
//ACCC
signed main(){
    string s;
    int cases=0;
    while(getline(cin,s)){
        if(s=="end"){break;}
        int res=1;

        char mem=' ';
        bool vis[26]={false};
        for(char &c:s){
            if(c>mem){
                mem=c;
                memset(vis,0,sizeof(vis));
                res=1;
                continue;
            }
            if(c<mem){
                if(!vis[c-'A']){
                    ++res;
                    vis[c-'A']=true;
                }
            }
        }
        cout<<"Case "<<++cases<<": "<<res<<'\n';
    }
	return 0;
}
