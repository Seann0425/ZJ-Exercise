#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,D;
    int x=0,y,sum=0;
    bool own=0;
    while(cin >> n >> D){
        for(int i=0;i<n;i++){
            cin >> y;
            if(own==1 && y>=x+D){
                own=0;
                sum+=y-x;
                x=y;
            }
            else if(own==0 && x==0){
                own=1;
                x=y;
            }
            else if(own==0 && y<=x-D){
                own=1;
                x=y;
            }
        }
        cout << sum;
    }
}
