#include <iostream>
#include <string>
#include <vector>

using namespace std;

signed main(){
    string s;
    int cases=0;
    while(cin>>s && s!="end"){
        vector<char>dat;
        dat.emplace_back(s[0]);
        
        for(int i=1;i<s.size();++i){
            if(s[i]>dat.back()){
                dat.emplace_back(s[i]);
            }else{
                *lower_bound(dat.begin(),dat.end(),s[i])=s[i];
            }
        }
        cout<<"Case "<<++cases<<": "<<dat.size()<<'\n';
    }
	return 0;
}
