#include <bits/stdc++.h>
using namespace std;

//var
int N[50005],output=0;
bool used[50005]={};
//function
void find(int x){
    used[x]=1;
    if(!used[N[x]]){
        find(N[x]);
        return;
    }
    else output++;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> N[i];
    }
    for(int i=0;i<n;i++){
        if(!used[i]) find(N[i]);
    }
    cout << output << "\n";
}
