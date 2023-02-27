#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,r;
    bool pass;
    string c;
    while(cin >> t){
        cin.ignore();
        while(t--){
            pass = 0;
            getline(cin,c);
            for(int i=1;pass==0;i++){
                if(pow(i,2)==c.size()){
                    pass=1;
                    r=i;
                    break;
                }
                else if(pow(i,2)>c.size()){
                    cout << "INVALID" << endl;
                    break;
                }
            }
            if(pass == 1){
                for(int i=0;i<r;i++){
                    for(int j=0;j<r;j++){
                        cout << c[i+j*r];
                    }
                }
                cout << endl;
            }
        }
    }
}
