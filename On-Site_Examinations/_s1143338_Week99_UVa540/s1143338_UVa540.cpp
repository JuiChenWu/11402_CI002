#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <utility>
#include <unordered_map>
using namespace std;

unordered_map<int,int>mp;
deque<pair<int,int>>PQ;
int N,M,cases=0,num;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin>>N && N!=0){
        mp.clear();
        PQ.clear();
        for(int i=0;i<N;++i){
            cin>>M;
            for(int j=0,tmp;j<M;++j){
                cin>>tmp;
                mp[tmp]=i;
            }
        }

        cout<<"Scenario #"<<++cases<<'\n';
        cin.ignore();
        string S;
        while(cin>>S){
            if(S=="STOP"){break;}

            if(S=="ENQUEUE"){
                cin>>num;

                bool f=false;
                for(deque<pair<int,int>>::reverse_iterator it=PQ.rbegin();it!=PQ.rend();++it){
                    if(it->first==mp[num]){
                        PQ.insert(PQ.begin()+PQ.size()-(it-PQ.rbegin()),make_pair(mp[num],num));

                        f=true;
                        break;
                    }
                }
                if(!f){
                    PQ.push_back(make_pair(mp[num],num));
                }

            }else if(S=="DEQUEUE"){
                cout<<PQ.front().second<<'\n';
                PQ.pop_front();
            }
        }
    }
    return 0;
}

