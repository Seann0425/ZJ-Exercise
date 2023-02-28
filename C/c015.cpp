#include <bits/stdc++.h>
using namespace std;

bool solve(long long &x){
    string s = to_string(x);
    reverse(s.begin(),s.end());
    x += stoll(s);
    s = to_string(x);
    for(int i=0,r=s.size()-1;i<=r;i++,r--){
        if(s[i] != s[r]) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while(N--){
        long long P;
        cin >> P;
        int cnt = 1;
        while(!solve(P)){
            cnt++;
        }
        cout << cnt << " " << P << endl;
    }
}
