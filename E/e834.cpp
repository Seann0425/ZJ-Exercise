#include <bits/stdc++.h>
using namespace std;

int main(){
    int M,N;
    while(cin >> M){
        while(cin >> N){
            if(N == 0) break;
            if(N%M == 0) cout << N/M << endl;
            else cout << M-(N%M) << endl;
        }
    }
}
