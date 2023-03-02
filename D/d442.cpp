#include <bits/stdc++.h>
using namespace std;

string S(string happy){
    int sum=0;
    for(int k=0;k<happy.size();k++){
        sum+=pow(happy[k]-'0',2);
    }
    return to_string(sum);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n;i++){
        string N,V;
        bool H,sw=1;
        cin >> N;
        V=N;
        set<string> record;
        record.insert(V);
        while(sw){
            if(S(V)=="1"){
                H=true;
                break;
            }
            else{
                if(!record.count(S(V))){
                    record.insert(S(V));
                    V=S(V);
                }
                else{
                    H=false;
                    break;
                }
            }
        }
        if(H){
            cout << "Case #" << i << ": " << N << " is a Happy number.\n";
        }
        else{
            cout << "Case #" << i << ": " << N << " is an Unhappy number.\n";
        }
    }
}
