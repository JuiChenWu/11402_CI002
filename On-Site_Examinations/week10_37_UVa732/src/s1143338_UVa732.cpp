#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string s1,s2;
stack<char>sk;
inline void dfs(int n1,int n2,string s){
    if(n2==s2.size()){
        cout<<s<<'\n';
        return;
    }
    if(n1<s1.size()){
        sk.emplace(s1[n1]);
        dfs(n1+1,n2,s+(s.empty()?"i":" i"));
        sk.pop();
    }
    if(!sk.empty() && sk.top()==s2[n2]){
        auto tmp=sk.top();
        sk.pop();
        dfs(n1,n2+1,s+" o");
        sk.emplace(tmp);
    }
}

signed main(){
    while(getline(cin,s1)){
        getline(cin,s2);
        cout<<"[\n";

        sk=stack<char>();
        if(s1.size()==s2.size()){
            dfs(0,0,"");
        }
        cout<<"]\n";
    }
	return 0;
}
