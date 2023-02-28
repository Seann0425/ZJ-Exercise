#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,counter=0;
    string s;
    stack<char> brackets;
    cin >> t;
    while(t--){
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                brackets.push(s[i]);
            }
            else if(s[i]==')'){
                if(brackets.top()=='('){
                    brackets.pop();
                    counter++;
                }
                else{
                    counter=0;
                    break;
                }
            }
        }
        if(!brackets.empty()) counter=0;
        cout << counter << "\n";
    }
}
