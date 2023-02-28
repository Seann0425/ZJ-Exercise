#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n && n){
        while(1){
            int goal[n];
            cin >> goal[0];
            if(goal[0]==0) break;
            for(int i=1;i<n;i++){
                cin >> goal[i];
            }
            int sec=1;
            stack<int> station;
            int now;
            for(now=0;now<n;now++){
                if(!station.empty() && station.top() == goal[now]){
                    station.pop();
                }
                else if(goal[now]>=sec){
                    for(int j=sec;j<goal[now];j++){
                        station.push(j);
                    }
                    sec=goal[now]+1;
                }
                else{
                    break;
                }
            }
            if(now==n){
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
        cout << "\n";
    }
}
