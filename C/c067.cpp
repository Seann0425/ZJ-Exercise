#include <bits/stdc++.h>
using namespace std;

int main(){
    int s=1,n,h[100],H,r;
    while(cin >> n){
        if(n==0) break;
        H=r=0;
        for(int i=0;i<n;i++){
            cin >> h[i];
            H+=h[i];
        }
        for(int i=0;i<n;i++){
            if(h[i]>H/n) r+=h[i]-H/n;
        }
        cout << "Set #" << s << endl << "The minimum number of moves is " << r << "." << endl << endl;
        s++;
    }
}
