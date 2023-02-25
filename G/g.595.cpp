#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h[105];
    int n;
    int rep=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> h[i];
    }
    h[0]=h[2];
    h[n+1]=h[n-1];
    for(int i=1;i<=n;i++){
        if(h[i]==0) rep+=min(h[i-1],h[i+1]);
    }
    cout << rep;
}
