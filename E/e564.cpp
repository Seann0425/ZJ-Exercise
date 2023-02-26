#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,Case=0,m,n,id[1000005];
    queue<int> team[1005], q;
    while(cin >> t){
        if(t==0) break;
        Case++;
        cout << "Scenario #" << Case << "\n";
        for(int i=1;i<=t;i++){
            cin >> n;
            for(int j=0;j<n;j++){
                cin >> m;
                id[m]=i;
            }
        }
        string s;
        while(cin >> s){
            if(s=="STOP") break;
            if(s=="ENQUEUE"){
                cin >> m;
                if(team[id[m]].empty()) q.push(id[m]);
                team[id[m]].push(m);
            }
            else if(s=="DEQUEUE"){
                int now=q.front();
                cout << team[now].front() << "\n";
                team[now].pop();
                if(team[now].empty()) q.pop();
            }
        }
        cout << "\n";
        while(!q.empty()){
            int now=q.front();
            while(!team[now].empty()) team[now].pop();
            q.pop();
        }
    }
}
