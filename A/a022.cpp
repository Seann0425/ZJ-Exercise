#include <bits/stdc++.h>
using namespace std;

int main(){
    string target;
    cin >> target;
    int n = target.size();
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(target[i]!=target[j]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
