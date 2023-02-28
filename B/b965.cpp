#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int R,C,M;
    int m[15][15]={},_m[15][15]={};
    bool a[10]={};
    while(cin >> R >> C >> M){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cin >> m[i][j];
            }
        }
        for(int i=0;i<M;i++) cin >> a[i];
        for(int k=M-1;k>=0;k--){
            if(a[k]){
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        _m[i][j]=m[R-1-i][j];
                    }
                }
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        m[i][j]=_m[i][j];
                    }
                }
            }
            else{
                swap(R,C);
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        _m[i][j]=m[j][R-1-i];
                    }
                }
                for(int i=0;i<R;i++){
                    for(int j=0;j<C;j++){
                        m[i][j]=_m[i][j];
                    }
                }
            }
        }
        cout << R << " " << C << "\n";
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout << _m[i][j];
                if(j==C-1) cout << "\n";
                else cout << " ";
            }
        }
    }
}
