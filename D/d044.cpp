#include <bits/stdc++.h>
using namespace std;

const int maxn=1e6;
bool unself[maxn+5]={};

void DR(int n){
    if(n>maxn) return;
    int sum=n;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(sum<=maxn){
        if(!unself[sum]){
            unself[sum]=1;
            DR(sum);
        }
        else return;
    }
    else return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<=maxn;i++){
        if(!unself[i]) DR(i);
    }
    for(int i=1;i<=maxn;i++){
        if(!unself[i]) cout << i << "\n";
    }
}
