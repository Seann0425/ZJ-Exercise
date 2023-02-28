#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    double sum=0;
    while(cin >> n){
        for(int i=0;i<n;i++){
            cin >> p;
            sum+=p;
        }
        if(sum/n>59) cout << "no" << endl;
        else cout << "yes" << endl;
        sum = 0;
    }
}
