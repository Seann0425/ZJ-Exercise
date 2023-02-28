#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string input;
    int k;
    cin >> k >> input;
    bool trans[(int)input.size()];
    for(int i=0;i<input.size();i++){
       if(input[i]-'a'>=0) trans[i]=0;
       else trans[i]=1;
    }

    int cnt=1;
    vector<int> re;
    for(int i=1;i<input.size();i++){
        if(trans[i]==trans[i-1]) cnt++;
        else{
            re.push_back(cnt);
            cnt=1;
        }
    }
    re.push_back(cnt);

    cnt=0;
    vector<int> con;
    for(int i=0;i<re.size();i++){
        if(re[i]==k) cnt++;
        else{
            if((i-cnt-1)>=0&&re[i-cnt-1]>k) cnt++;
            if(re[i]>k) cnt++;
            con.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt>0){
        if(re[re.size()-cnt-1]>k) cnt++;
        con.push_back(cnt);
    }

    int mx=0;
    for(auto i:con){
        if(i>mx) mx=i;
    }
    cout << mx*k << "\n";
}
