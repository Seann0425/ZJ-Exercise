#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,m,p;
    int o[10][10];
    while(cin >> t){
        for(int i=0;i<t;i++){
            p=0;
            cin >> n >> m;
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    cin >> o[j][k];
                }
            }
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    if(o[j][k]!=o[n-1-j][m-1-k]){
                        p=1;
                        break;
                    }
                }
                if(p) break;
            }
            if(p) cout << "keep defending" << endl;
            else cout << "go forward" << endl;
        }
    }
}
