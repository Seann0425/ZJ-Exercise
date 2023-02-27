#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int B[100];
    int N,Case=0;
    bool Switcher=1;
    set<int> Con; 
    while(cin >> N){
        Case++;
        Switcher=1;
        for(int i=0;i<N;i++){
            cin >> B[i];
            for(int j=0; j<=i && Switcher; j++){
                if(Con.count(B[j]+B[i])){
                    cout << "Case #" << Case << ": It is not a B2-Sequence." << endl;
                    Switcher=0;
                    break;
                }
                else Con.insert(B[j]+B[i]);
            }
        }
        if(Switcher) cout << "Case #" << Case << ": It is a B2-Sequence." << endl;
        Con.clear();
    }
}
