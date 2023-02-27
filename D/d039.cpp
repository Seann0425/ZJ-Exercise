#include <bits/stdc++.h>
using namespace std;

int minium(int n,int m){
    int a,b;
    a=(n-2)/3;
    b=(m-2)/3;
    if((n-2)%3==0&&(m-2)%3!=0) return a*b+a;
    else if((n-2)%3!=0&&(m-2)%3==0) return a*b+b;
    else if((n-2)%3+(m-2)%3==0) return a*b;
    else return a*b+a+b+1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,x,y;
    while(cin >> t){
        for(int i=0;i<t;i++){
            cin >> x >> y;
            cout << minium(x,y) << endl;
        }
    }
}
