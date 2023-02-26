#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=a;i>0;i--){
        if(i!=b && i!=c && i!=d) cout << "No. " << i << endl;
    }
}
