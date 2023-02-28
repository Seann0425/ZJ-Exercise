#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s,k;
    while(cin >> n >> k){
        s=n;
        while(s>=k){
            n+=s/k;
            s=s%k+s/k;
        }
        cout << n << endl;
    }

}
