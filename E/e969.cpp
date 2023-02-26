#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,K;
    cin >> N >> M >> K;
    if(K == 0 && N < 32 || K == 1 && N < 55){
        cout << "Wayne can't eat and drink." << endl;
        return 0;
    }
    for(int i=0; K<=1; i++){
        if(K == 0 && N >= 32){
            N-=32;
            cout << i*M << ": Wayne eats an Apple pie, and now he";
            if(N>1) cout << " has " << N << " dollars." << endl;
            else if(N == 0) cout << " doesn't have money.";
            else cout << " has " << N << " dollar." << endl;
            K++;
            continue;
        }
        if(K == 1 && N >= 55){
            N-=55;
            cout << i*M << ": Wayne drinks a Corn soup, and now he";
            if(N>1) cout << " has " << N << " dollars." << endl;
            else if(N == 0) cout << " doesn't have money.";
            else cout << " has " << N << " dollar." << endl;
            K--;
            continue;
        }
        K=2;
    }

}
