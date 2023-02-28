#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,temp;
    set<int> Asem;
    while(cin >> N){
        for(int i=0; i<N; i++){
            cin >> temp;
            Asem.insert(temp);
        }
        cout << Asem.size() << endl;
        for(auto &i : Asem){
            cout << i << " ";
        }
        cout << endl;
        Asem.empty();
    }
}
