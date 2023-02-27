#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y){
    return (y==0)?x:GCD(y,x%y);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,g;
    while(cin >> n){
        if(n==0) break;
        g=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=GCD(i,j);
            }
        }
        cout << g << endl;
    }
}
