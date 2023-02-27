#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    while(cin >> a >> b >> c >> d){
        if(a+b+c+d == 0) return 0;
        else if(c<a || a==c&&d<b){
            cout << (c+24)*60+d-a*60-b << endl;
        }
        else cout << c*60+d-a*60-b << endl;
    }
}
