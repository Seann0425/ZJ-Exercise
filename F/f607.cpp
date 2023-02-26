#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,l;
    long long sum=0;
    set<int> stick;
    vector<pair<int, int>> order;
    cin >> n >> l;
    stick.insert(0);
    stick.insert(l);
    for(int i=1,a,b;i<=n;i++){
        cin >> a >> b;
        order.push_back({b,a});
    }
    sort(order.begin(),order.end());
    for(vector <pair<int,int>>::iterator itr = order.begin();itr!=order.end();itr++){
        int x = (*itr).second;
        stick.insert(x);
        set<int>::iterator loc = stick.lower_bound(x);
        sum+=(*next(loc))-(*prev(loc));
    }
    cout << sum << "\n";
}
