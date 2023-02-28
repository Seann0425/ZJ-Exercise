#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a=0,b=0;
    string numbers;
    cin >> numbers;
    for(int i=0;i<numbers.size();i++){
        if(i%2) a+=numbers[i]-'0';
        else b+=numbers[i]-'0';
    }
    cout << abs(a-b) << "\n";
}
