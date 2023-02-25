#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int sum=0, n, L, i,o;
    int head, tail;
    int order[200005]={};
    set< pair<int,int> > stick;
    set< pair<int,int> >::iterator itr;
    cin >> n >> L;
    stick.insert(make_pair(0,L));
    for(int k=1;k<=n;k++){
        cin >> i >> o;
        order[o]=i;
    } 
    for(int k=1;k<=n;k++){
        for(itr = stick.begin(); itr!=stick.end(); itr++){
            if(itr->first<order[k] &&itr->second>order[k]){
                head=itr->second;
                tail=itr->first;
                stick.erase(itr);
                sum+=head-tail;
                stick.insert(make_pair(order[k],head));
                stick.insert(make_pair(tail,order[k]));
                break;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}
