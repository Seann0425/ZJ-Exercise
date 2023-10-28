#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    long long l[3];
    cin >> T;
    int cas=1;
    while(T--){
        for(int i=0;i<3;i++){
            cin >> l[i];
        }
        sort(l,l+3);
        cout << "Case " << cas << ": ";
        if(l[0]+l[1]<=l[2]||l[0]<=0) cout << "Invalid";
        else if(l[0]==l[1]&&l[1]==l[2]) cout << "Equilateral";
        else if(l[0]==l[1]||l[1]==l[2]) cout << "Isosceles";
        else cout << "Scalene";
        cout << "\n";
        cas++;
    }


    return 0;
}
