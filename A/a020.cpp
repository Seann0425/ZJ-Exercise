#include <bits/stdc++.h>
using namespace std;

int main(){
    //dictionary
    map<char, int> dic;
    dic['I']=34;
    dic['O']=35;
    dic['W']=32;
    dic['X']=30;
    dic['Y']=31;
    dic['Z']=33;
    for(int i=0;i<8;i++){
        dic['A'+i]=10+i;
    }
    for(int i=0;i<5;i++){
        dic['J'+i]=18+i;
    }
    for(int i=0;i<7;i++){
        dic['P'+i]=23+i;
    }

    char id[10];
    for(int i=0;i<10;i++){
        cin >> id[i];
    }
    
    int sum=0;
    sum+=((dic[id[0]]%10)*9+dic[id[0]]/10);
    for(int i=1;i<=8;i++){
        sum+=(id[i]-'0')*(9-i);
    }
    sum+=id[9]-'0';

    if(!(sum%10)) cout << "real\n";
    else cout << "fake\n";

    return 0;
}
