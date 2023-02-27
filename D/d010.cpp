#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,S=0;
    while(cin >> N){
        for(int i=1;i<N;i++){
            if(N%i == 0) S+=i;
        }
        if(S>N) cout << "盈數" << endl;
        else if(S<N) cout << "虧數" << endl;
        else cout << "完全數" << endl;
        S=0;
    }
}
