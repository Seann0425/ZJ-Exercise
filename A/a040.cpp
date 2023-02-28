#include <bits/stdc++.h>
using namespace std;

int Armstrong(int x){
    int Out=0;
    string Out_s = to_string(x);
    for(int i=0;i<Out_s.size();i++){
        Out += pow(Out_s[i]-'0',Out_s.size());
    }
    return Out;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    bool pass=0;
    cin >> n >> m;
    for(int i=n;i<=m;i++){
        if(i == Armstrong(i)){
            cout << i << " ";
            pass=1;
        }
    }
    if(!pass) cout << "none";
}
