#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,f;
    while(cin >> n){
        for(int i=0;i<n;i++){
           cin >> a >> f;
           for(int j=0;j<f;j++){
               for(int k=1;k<=a;k++){
                   for(int t=0;t<k;t++){
                       cout << k;
                   }
                   cout << endl;
               }
               for(int k=a-1;k>0;k--){
                   for(int t=0;t<k;t++){
                       cout << k;
                   }
                   cout << endl;
               }
               cout << endl;
           } 
        }
    }
}
