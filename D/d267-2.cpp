#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    string tg;
    int max;
    cin >> T;
    cin.ignore();
    while(T--){
        getline(cin, tg);
        int count[30]={0};
        for(int i=0;i<tg.size();i++){
            if(tg[i]>='A'&&tg[i]<='Z'){
                count[tg[i]-'A']++;
            }
            else if(tg[i]>='a'&&tg[i]<='z'){
                count[tg[i]-'a']++;
            }
        }
        max=0;
        for(int i=0;i<26;i++){
            if(count[i]>max) max=count[i];
        }
        for(int i=0;i<26;i++){
            if(count[i]==max) cout << char('a'+i);
        }
        cout << "\n";
    }
}
