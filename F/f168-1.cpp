#include <bits/stdc++.h>
using namespace std;

//var
int N;
int A[3]={};
int V[16];
bool pass=0;

//recursion
void Treasure(int n){
    if(n==N){
        if(A[0]==A[1] && A[1]==A[2]) pass =1;
        return;
    }
    int x=A[0],y=A[1],z=A[2];
    for(int i=0;i<3&&pass==0;i++){
        A[0]=x;
        A[1]=y;
        A[2]=z;
        A[i]+=V[n];
        Treasure(n+1);
    }
}

//main
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> V[i];
    }
    Treasure(0);
    if(pass) cout << "YES";
    else cout << "NO";
}
