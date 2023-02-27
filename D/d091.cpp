#include <bits/stdc++.h>
using namespace std;

struct Rec{
    double x1,y1,x2,y2;
    bool contain(double &x,double &y){
        if(x>min(x1,x2)&&x<max(x1,x2)&&y>min(y1,y2)&&y<max(y1,y2)){
            return 1;
        }
        else return 0;
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int  amount=0,quantity=0;
    double px,py;
    Rec figures[10];
    char shape = 'r';
    while(shape == 'r'){
        cin >> shape;
        if(shape == 'r'){
            amount++;
            cin >> figures[amount-1].x1 >> figures[amount-1].y1 >> figures[amount-1].x2 >> figures[amount-1].y2;
        }
    }
    while(cin >> px >> py){
        if(px == 9999.9 && py == 9999.9) break;
        bool pass=0;
        quantity++;
        for(int i=0;i<amount;i++){
            if(figures[i].contain(px,py)){
                cout << "Point " << quantity << " is contained in figure " << i+1 << endl;
                pass =1;
            }
        }
        if(!pass && quantity == 985) cout << "Point " << quantity << " is not contained in any figure" << endl;
        else if(!pass && quantity != 985) cout << "Point " << quantity << " is not contained in any figure " << endl;
    }

}
