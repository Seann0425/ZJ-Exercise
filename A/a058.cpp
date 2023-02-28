#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,a0=0,a1=0,a2=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k;
        switch(k%3){
            case 0:
                a0++;
                break;
            case 1:
                a1++;
                break;
            default:
                a2++;
                break;
        }
    }
    cout << a0 << " " << a1 << " " << a2;
}
