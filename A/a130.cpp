#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int,string>> web(10);
    int t,maxium;
    while(cin >> t){
        for(int i=0;i<t;i++){
            maxium =0;
            cout << "Case #" << i+1 << ":\n";
            for(int j=0;j<10;j++){
                cin >> web[j].second >> web[j].first;
            }
            for(int j=0;j<10;j++){
                if(web[j].first > maxium) maxium = web[j].first;
            }
            for(int j=0;j<10;j++){
                if(web[j].first == maxium) cout << web[j].second << endl;
            }
            web.clear();
        }
    }
}
