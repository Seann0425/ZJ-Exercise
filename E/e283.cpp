#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string,char> mp;
    mp["0 1 0 1"] = 'A';
    mp["0 1 1 1"] = 'B';
    mp["0 0 1 0"] = 'C';
    mp["1 1 0 1"] = 'D';
    mp["1 0 0 0"] = 'E';
    mp["1 1 0 0"] = 'F';
    int T;
    string get;
    while(cin >> T){
        cin.ignore();
        for(int i=0;i<T;i++){
            getline(cin,get);
            cout << mp[get];
        }
        cout << "\n";
    }
}
