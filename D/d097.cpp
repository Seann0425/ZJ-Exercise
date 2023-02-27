#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        int J[3000],j[3000];
        for(int i=0;i<n;i++){
            cin >> J[i];
			if(i == 0) continue;		
            j[i-1] = abs(J[i]-J[i-1]);
        }
        sort(j,j+n-1);
        for(int i=0;i<n-1;i++){
            if(j[i]!=i+1){
                cout << "Not jolly" << endl;
                break;
            }
            if(i == n-2){
                cout << "Jolly" << endl;
            }
        }
    }
}
