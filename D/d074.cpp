#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,M=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        M = max(s,M);
    }
    cout << M;
}
