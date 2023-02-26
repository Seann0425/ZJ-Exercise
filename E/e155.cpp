#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    while(cin >> T){
        if(T==0) break;
        queue<int> c;
        for(int i=1;i<=T;i++){
            c.push(i);
        }
        cout << "Discarded cards: ";
        for(int i=0;i<T;i++){
         if(i!=T-1){
            cout << c.front();
            c.pop();
            c.push(c.front());
            c.pop();
            if(i!=T-2) cout << ", ";
         }
         else cout << "\n";
        }
        cout << "Remaining card: " << c.front() << "\n";
    }
}
