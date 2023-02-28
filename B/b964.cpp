#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[25];
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s[i];
    }
    sort(s,s+t);
    for(int i=0;i<t;i++){
        cout << s[i] << " ";
    }
    cout << "\n";
    for(int i=0;i<t;i++){
        if(s[0]>=60){
            cout << "best case\n" << s[0];
            break;
        }
        if(s[t-1]<60){
            cout << s[t-1] << "\n" << "worst case";
            break;
        }
        if(s[i+1]>=60){
            cout << s[i] << "\n" << s[i+1] << "\n";
            break;
        }
    }
}
