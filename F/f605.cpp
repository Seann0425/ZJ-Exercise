#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int p[105][3];
    int d,avg=0,sum=0;
    int maxn,minn;
    int n,a=0;
    cin >> n >> d;
    for(int i=1;i<=n;i++){
        avg=0;
        for(int j=0;j<3;j++){
            cin >> p[i][j];
            avg+=p[i][j];
        }
        maxn=max(p[i][0],p[i][1]);
        maxn=max(maxn,p[i][2]);
        minn=min(p[i][0],p[i][1]);
        minn=min(minn,p[i][2]);
        if(maxn-minn>=d){
            sum+=avg/3;
            a++;
        }
    }
    cout << a << " " << sum;
}
