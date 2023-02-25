#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a1,b1,c1,a2,b2,c2;
    int n,temp;
    int maxn=-1e9;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    cin >> n;
    for(int i=0;i<=n;i++){
        temp=a1*pow(i,2)+b1*i+c1+a2*pow((n-i),2)+b2*(n-i)+c2;
        maxn=max(maxn,temp);
    }
    cout << maxn;
}
