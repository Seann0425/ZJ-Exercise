#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string l;
    while(cin >> t){
        cin.ignore();
        while(t--){
            getline(cin,l);
            int a[26] = {};
            int mx=0;
            for(int i=0;i<l.size();i++){
                int idx=-1;
                if(l[i]>='A'&&l[i]<='Z'){
                    idx = l[i]-'A';
                    a[idx]++; 
                }
                else if(l[i]>='a'&&l[i]<='z'){
                    idx = l[i]-'a';
                    a[idx]++; 
                }
                if(idx>=0) mx=max(mx,a[idx]);
            }
            for(int i=0;i<26;i++){
                if(a[i]==mx) cout << (char)(i+'a');
            }
            cout << endl;
        }
    }
}
