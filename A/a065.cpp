#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string c;
    while(cin >> c){
        for(int i=0;i<6;i++){
            cout << abs(c[i]-c[i+1]);
        }
        cout << endl;
    }
}
