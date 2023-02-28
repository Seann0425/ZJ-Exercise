#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[3];
    cin >> s[0] >> s[1] >> s[2];
    sort(s,s+3);
    cout << s[0] << " " << s[1] << " " << s[2] << "\n";
    if(s[0]+s[1]>s[2]){
        if(s[0]*s[0]+s[1]*s[1]<s[2]*s[2]) cout << "Obtuse";
        else if(s[0]*s[0]+s[1]*s[1]>s[2]*s[2]) cout << "Acute";
        else cout << "Right";
    }
    else cout << "No";
}
