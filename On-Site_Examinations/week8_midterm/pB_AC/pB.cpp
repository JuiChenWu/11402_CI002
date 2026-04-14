#include <iostream>
#include <string>

using namespace std;

signed main(){
    string S;
    int cases=0;
    while(true){
        getline(cin,S);
        if(S=="#"){break;}

        cout<<"Case "<<++cases<<": ";
        if(S=="HELLO"){
            cout<<"ENGLISH\n";
        }else if(S=="HOLA"){
            cout<<"SPANISH\n";
        }else if(S=="BONJOUR"){
            cout<<"FRENCH\n";
        }else if(S=="HALLO"){
            cout<<"GERMAN\n";
        }else if(S=="CIAO"){
            cout<<"ITALIAN\n";
        }else if(S=="ZDRAVSTVUJTE"){
            cout<<"RUSSIAN\n";
        }else{
            cout<<"UNKNOWN\n";
        }
    }
    return 0;
}
