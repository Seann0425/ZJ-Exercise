#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,n;
    int t,sum=0;
    int am=0,bm=0;
    cin >> a >> b >> n;
    for(int i=0;i<n;i++){
        am=bm=0;
        while(cin >> t){
            if(t==0) break;
            if(t == a) am++;
            if(t == b) bm++;
            if(t == (-1)*a) am--;
            if(t == (-1)*b) bm--;
        }
        if(am>0 && bm>0) sum++;
    }
    cout << sum;
}
