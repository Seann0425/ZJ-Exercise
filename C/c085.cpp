#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int z,i,m;
    long long r,l;
    int cas=0;
    set<long long> s;
    vector<long long> v;
    while(cin >> z >> i >> m >> l){
        cas++;
        if(z+i+m+l == 0) break;
        for(int j=0;j==s.size();j++){
            r = (z*l%m+i)%m;
            l = r;
            s.insert(r);
            v.push_back(r);
        }
        int j=0;
        while(v[j]!=r) j++;
        int k = j;
        j++;
        while(v[j]!=r) j++;
        cout << "Case " << cas << ": " << j-k << endl;
        s.clear();
        v.clear();
    }
}
