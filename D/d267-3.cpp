#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string s;
    cin >> n;
    getline(cin,s);
    while(n--){
        map<char,int> mp;
        getline(cin,s);
        int mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                mp[s[i]]++;
                mx=max(mx,mp[s[i]]);
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s[i]='a'+(s[i]-'A');
                mp[s[i]]++;
                mx=max(mx,mp[s[i]]);
            }
        }
        for(auto i:mp){
            if(i.second==mx) cout << i.first;
        }
        cout << "\n";
    }

    return 0;
}
