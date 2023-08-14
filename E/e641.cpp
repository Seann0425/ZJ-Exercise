#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> mp;
    string word;
    int cnst;
    mp['B']=1;
    mp['V']=1;
    mp['F']=1;
    mp['P']=1;
    mp['C']=2;
    mp['G']=2;
    mp['J']=2;
    mp['K']=2;
    mp['Q']=2;
    mp['S']=2;
    mp['X']=2;
    mp['Z']=2;
    mp['D']=3;
    mp['T']=3;
    mp['L']=4;
    mp['M']=5;
    mp['N']=5;
    mp['R']=6;
    while(cin >> word){
        cnst=0;
        for(int i=0; i < word.length() ;i++){
            if(!mp.count(word[i])){
                cnst=0;
                continue;
            }
            if(mp[word[i]]!=cnst){
                cout << mp[word[i]];
                cnst=mp[word[i]];
            }
        }
        cout << "\n";
    }
    return 0;
}
