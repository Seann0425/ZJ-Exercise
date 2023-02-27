#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Store,Case=0;
    int problem[12],produce[12];
    while(cin >> Store){
        if(Store < 0) break;
        Case++;
        cout << "Case " << Case << ":" << endl;
        for(int i=0; i<=11; i++){
            cin >> produce[i];
        }
        for(int i=0; i<=11; i++){
            cin >> problem[i];
            if(problem[i]<=Store){
                cout << "No problem! :D" << endl;
                Store-=problem[i];
            }
            else cout << "No problem. :(" << endl;
            Store+=produce[i];
        }
    }
}
