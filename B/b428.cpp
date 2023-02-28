#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string o,c;
    while(cin >> o >> c){
        cout << ((c[0]-o[0])+26)%26 << endl;
    }
}
