#include <bits/stdc++.h>
using namespace std;

int main(){
    int nm[20]={},t[20]={},S=0;
    int n,m;
    bool pass=0;
    vector<int> f;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> nm[j];
        }
        t[i]=*max_element(nm,nm+m);
        S+=t[i];
    }
    cout << S << "\n";
    for(int i=0;i<n;i++){
        if(S%t[i]==0){
            pass =1;
            f.push_back(t[i]);
        }
    }
    for(int i=0;i<f.size();i++){
        cout << f[i];
        if(i<f.size()-1) cout << " ";
    }
    if(!pass) cout << "-1";
}
