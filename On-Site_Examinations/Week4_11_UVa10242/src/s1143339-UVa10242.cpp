#pragma GCC optimize("Ofast,fast-math,unroll-loops")

#include <iostream>
#include <stdio.h>

using namespace std;

signed main(){
    double dat[4][2];
    int saa,sab;
    while(cin>>dat[0][0]>>dat[0][1]
              >>dat[1][0]>>dat[1][1]
              >>dat[2][0]>>dat[2][1]
              >>dat[3][0]>>dat[3][1]
          ){
        saa=0;sab=0;
        for(int i=0;i<3;++i){
            for(int j=i+1;j<4;++j){
                if(dat[i][0]==dat[j][0] && dat[i][1]==dat[j][1]){
                    saa=i;
                    sab=j;
                    break;
                }
            }
            if(saa || sab){break;}
        }
        double resx=0,resy=0;
        for(int i=0;i<4;++i){
            if(i==saa || i==sab){continue;}
            resx+=dat[i][0];
            resy+=dat[i][1];
        }
        resx-=dat[saa][0];
        resy-=dat[saa][1];

        printf("%.3f %.3f\n",resx,resy);
    }
    return 0;
}
