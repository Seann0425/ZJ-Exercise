#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    bool r,p=0;
    cin >> a >> b >> r;
    if((a&&b)==r){
        cout << "AND\n";
        p=1;
    }
    if((a||b)==r){
        cout << "OR\n";
        p=1;
    }
    if((a==0&&b!=0||a!=0&&b==0)==r){
        cout << "XOR\n";
        p=1;
    }
    if(!p) cout << "IMPOSSIBLE";
}
