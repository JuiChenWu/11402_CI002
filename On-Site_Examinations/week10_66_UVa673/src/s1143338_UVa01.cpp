#include <iostream>
#include <vector>
#include <string>

using namespace std;

signed main(){
    int N;
    cin>>N;
    cin.ignore();

	string s;
	while(N--){
        getline(cin,s);
		//if(s==""){continue;}

		bool f=true;
		vector<char>dat;
		for(char &c:s){
            if(c=='('){
                dat.emplace_back('(');
            }else if(c=='['){
                dat.emplace_back('[');
            }else if(c=='{'){
                dat.emplace_back('{');
            }else if(c==')'){
                if(dat.empty()){f=false;break;}
                if(dat.back()=='('){
                    dat.pop_back();
                }else{
                    f=false;
                    break;
                }
            }else if(c==']'){
                if(dat.empty()){f=false;break;}
                if(dat.back()=='['){
                    dat.pop_back();
                }else{
                    f=false;
                    break;
                }
            }else if(c=='}'){
                if(dat.empty()){f=false;break;}
                if(dat.back()=='{'){
                    dat.pop_back();
                }else{
                    f=false;
                    break;
                }
            }
		}

		if(f && dat.empty()){
            cout<<"Yes\n";
		}else{
            cout<<"No\n";
		}
	}
	return 0;
}
/*
8
))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
(((((
[[[[))))

)
*/
