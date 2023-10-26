#include <bits/stdc++.h>
using namespace std;

struct node{
    int h;//height of a jar
    int id;//id of a jar
    node(int _h, int _id){
        h=_h;
        id=_id;
    }
};

struct cmp{
    bool operator()(const node& lhs, const node& rhs){
        return lhs.h>rhs.h;
    }
};

int main(){
    int n, jar, delta;
    while(cin >> n >> jar >> delta){
        long long ans=0;
        delta-=delta%jar;
        priority_queue<node, vector<node>, cmp> pq;
        int a[n];
        //fetch height of the jars
        for(int i=0;i<n;i++){
            cin >> a[i];
            pq.push(node(a[i], i));
        }
        while(!pq.empty()){
            node now=pq.top();
            pq.pop();
            //check the left side
            if(now.id!=0){
                if(a[now.id-1]-now.h>delta){
                    int van=a[now.id-1]-now.h-delta;
                    a[now.id-1]-=van;
                    ans+=van/jar;
                    node update(0,0);
                    update.h=a[now.id-1];
                    update.id=now.id-1;
                    pq.push(update);
                }
            }
            //check the right side
            if(now.id!=n-1){
                if(a[now.id+1]-now.h>delta){
                    int van=a[now.id+1]-now.h-delta;
                    a[now.id+1]-=van;
                    ans+=van/jar;
                    node update(0,0);
                    update.h=a[now.id+1];
                    update.id=now.id+1;
                    pq.push(update);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
