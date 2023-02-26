#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a=0,na,b=0,nb,wa=0,wb=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> na;
            a+=na;
        }
        for(int j=0;j<4;j++){
            cin >> nb;
            b+=nb;
        }
        if(a>b) wa++;
        else wb++;
        cout << a << ":" << b << "\n";
        a=b=0;
    }
    if(wa==wb) cout << "Tie";
    else if(wa==2) cout << "Win";
    else cout << "Lose";
}
