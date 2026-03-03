#include <iostream>
#include <string>
#include <vector>
using namespace std;

signed main(){
    vector<string>dat;

    string s;
    while(getline(cin,s)){
        dat.push_back(s);
    }

    bool f=true;

    for(int i=0;i<dat.size();++i){
        for(int j=0;j<dat[i].size();++j){
            if(dat[i][j]=='"'){
                if(f){
                    f=false;
                    dat[i][j]='`';
                    dat[i].insert(dat[i].begin()+j,'`');
                }else{
                    f=true;
                    dat[i][j]='\'';
                    dat[i].insert(dat[i].begin()+j,'\'');
                }
            }
        }
    }

    for(int i=0;i<dat.size();++i){
        for(int j=0;j<dat[i].size();++j){
            cout<<dat[i][j];
        }
        cout<<'\n';
    }
    //cout<<'\n';
}
/*
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
*/
