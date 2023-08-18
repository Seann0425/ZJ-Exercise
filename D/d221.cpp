#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long sum;
    int N,temp,a,b;
    while(cin >> N){
        if(N==0) break;
        priority_queue<int,vector<int>,greater<int>> sumi;
        sum=0;
        for(int i=0;i<N;i++){
            cin >> temp;
            sumi.push(temp);
        }
        for(int i=0;i<N-1;i++){
            a=sumi.top();
            sumi.pop();
            b=sumi.top();
            sumi.pop();
            sumi.push(a+b);
            sum+=a+b;
        }
        cout << sum << "\n";
    }
    return 0;
}
