#include <bits/stdc++.h>
using namespace std;

int N, a[15];
bool used[15]={};

void fuck(int d){
    if(d > N){
        for(int i=1;i<=N;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1;i<=N;i++){
        if(used[i]==1) continue;
        used[i]=1;
        a[d]=i;
        fuck(d+1);
        used[i]=0;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    fuck(1);
}
