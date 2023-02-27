#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string numbers;
    int c1,c2;
    while(cin >> numbers){
        if(numbers == "0") break;
        c1=0;
        c2=0;
        for(int i=0;i<numbers.size();i++){
            if(i%2) c1+=numbers[i]-'0';
            else c2+=numbers[i]-'0';
        }
        if(abs(c1-c2)%11 == 0) cout << numbers << " is a multiple of 11." << endl;
        else cout << numbers << " is not a multiple of 11." << endl;
    }
}
