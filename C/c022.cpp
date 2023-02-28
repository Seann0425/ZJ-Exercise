#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,a,b,sum=0;
    cin >> T;
    for(int i=1;i<=T;i++){
        cin >> a >> b;
        if(a%2==0){
            a++;
            for(;a<=b;a+=2){
                sum+=a;
            }
        }
        else{
            for(;a<=b;a+=2){
                sum+=a;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
        sum = a = b =0;
    }
}
