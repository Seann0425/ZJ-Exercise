#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T,P;
    string s;
    stringstream ss;
    cin >> T;
    cin.ignore();
    while(T--){
        getline(cin,s);
        getline(cin,s);
        ss.str("");
        ss.clear();
        ss.str(s);
        vector<int> p;
        while(ss>>P){
            p.push_back(P);
        }
        getline(cin,s);
        ss.str("");
        ss.clear();
        ss.str(s);
        vector<string> x;
        while(ss>>s){
            x.push_back(s);
        }
        string a[(int)p.size()+1];
        for(int i=0;i<p.size();i++) a[p[i]] = x[i];
        for(int i=1;i<=p.size();i++) cout << a[i] << "\n";
    }
}
