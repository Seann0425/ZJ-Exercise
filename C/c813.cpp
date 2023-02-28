#include <bits/stdc++.h>
using namespace std;

int f(string &n){
    int output=0;
    string digit;
    for(int i=0;i<n.size();i++){
        output+=n[i]-'0';
    }
    digit = to_string(output);
    return (digit.size()==1)? output : f(digit);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string x;
    while(cin >> x){
        if(x == "0") break;
        cout << f(x) << endl;
    }
}
