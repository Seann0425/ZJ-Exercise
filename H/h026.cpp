#include <bits/stdc++.h>
using namespace std;

int Win(int &x,int &y){
    if(x==y) return 0;
    else if(x==0&&y==2||x==2&&y==5||x==5&&y==0) return 1;
    else return 2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N[15]={};
    int F,a;
    bool re=0;
    cin >> F >> a;
    for(int i=1;i<=a;i++){
        cin >> N[i];
    }
    N[0]=3;
    for(int i=1;i<=a&&re==0;i++){
        if(i==1){
            cout << F << " ";
            switch(Win(F,N[i])){
                case 1:
                    cout << ": Won at round 1";
                    re=1;
                    break;
                case 2:
                    cout << ": Lost at round 1";
                    re=1;
                    break;
            }
            continue;
        }
        if(N[i-1]==N[i-2]){
            switch(N[i-1]){
                case 0:
                    F=5;
                    break;
                case 2:
                    F=0;
                    break;
                default:
                    F=2;
                    break;
            }
            cout << F << " ";
            switch(Win(F,N[i])){
                case 1:
                    cout << ": Won at round " << i;
                    re=1;
                    break;
                case 2:
                    cout << ": Lost at round " << i;
                    re=1;
                    break;
            }
        }
        else{
            cout << N[i-1] << " ";
            switch(Win(N[i-1],N[i])){
                case 1:
                    cout << ": Won at round " << i;
                    re=1;
                    break;
                case 2:
                    cout << ": Lost at round " << i;
                    re=1;
                    break;
            }
        }

    }
    if(!re) cout << ": Drew at round " << a;
}
