#include <bits/stdc++.h>
using namespace std;

int Numbers(int x,string n){
    int output=0;
    for(int i=0;i<n.size();i++){
        output+=(n[i]-'0')*pow(x,n.size()-i-1);
    }
    return output;
}

int Narcissistic(string n){
    int output=0;
    for(int i=0;i<n.size();i++){
        output+=pow((n[i]-'0'),n.size());
    }
    return output;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Radix;
    string N;
    while(cin >> Radix >> N){
        if(Numbers(Radix,N) == Narcissistic(N)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
