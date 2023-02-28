#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,iipai[100000],tari[100000],l,r,sum;
    while(cin >> n >> m){
        for(int i=0;i<n;i++){
            cin >> iipai[i];
            if(i==0) tari[i] = iipai[i];
            else tari[i] = tari[i-1] + iipai[i];
        }
        for(int i=0;i<m;i++){
            cin >> l >> r;
            if(l==1) cout << tari[r-1] << endl;
            else cout << tari[r-1] - tari[l-2] << endl;
        }
    }
}
