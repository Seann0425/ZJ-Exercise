#include <bits/stdc++.h>
using namespace std;

struct book{
    int p;//print
    int b;//binding
    book(int _p, int _b){
        p=_p;
        b=_b;
    }
};

struct cmp{
    bool operator()(book a, book b){
        return a.b<b.b;
    }
};

/*struct cmp_t{
    bool operator()(int a, int b){
        return a>b;
    }
};*/

int main(){
    int n;
    while(cin >> n){
        priority_queue<book, vector<book>, cmp> pq;
        priority_queue<int> time;
        int P,B;
        for(int i=0;i<n;i++){
            cin >> P >> B;
            pq.push(book(P,B));
        }
        int pT=0;
        //int E;
        while(!pq.empty()){
            book now = pq.top();
            pq.pop();
            time.push(pT+now.p+now.b);
            /*if(pq.empty()){
                E=pT+now.p+now.b;
            }*/
            pT+=now.p;
        }
        //while(time.top()<E) time.pop();
        cout << time.top() << "\n";
    }

    return 0;
}
