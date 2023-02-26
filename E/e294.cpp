#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long N,N1,N2;
    string S;
    bool trans=0;
    while(cin >> N){
        S=to_string(N);
        trans=0;
        for(int i=0;i<S.size();i++){
            if((S[i]-'0')%2==0&&trans==0){
                S[i]=char(S[i]+1);
                trans=1;
                continue;
            }
            if(trans==1) S[i]='1';
        }
        N2=stoll(S);
        S=to_string(N);
        trans=0;
        for(int i=0;i<S.size();i++){
            if((S[i]-'0')%2==0&&S[i]!='0'&&trans==0){
                S[i]=char(S[i]-1);
                trans=1;
                continue;
            }
            else if(S[i]=='0'&&trans==0){
                for(int j=i-1;j>=0;j--){
                    if(S[j]!='1'){
                        S[j]=char(S[j]-2);
                        i=j+1;
                        trans=1;
                        break;
                    }
                    else if(j==0&&S[j]=='1'){
                        S.erase(S.begin());
                        i=0;
                        trans=1;
                        break;
                    }
                }
            }
            if(trans==1) S[i]='9';
        }
        N1=stoll(S);
        cout << min((N-N1),(N2-N)) << "\n";
    }
}
