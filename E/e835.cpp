#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        switch(a<=2500){
            case 1:
                cout << "1 " << (a-1)/25+1 << " " << (a-1)%25+1;
                break;
            case 0:
                if(a<=7500){
                    a-=2500;
                    cout << "2 " << (a-1)/50+1 << " " << (a-1)%50+1;
                    break;
                }
                else{
                    a-=7500;
                    cout << "3 " << (a-1)/25+1 << " " << (a-1)%25+1;
                    break;
                }
                
        }
    }
}
