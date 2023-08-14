#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,x;
    int i=0;
    while(cin >> s){
        if(s!="#"){
            i++;
            if(s=="HELLO") x="ENGLISH";
            else if(s=="HALLO") x="GERMAN";
            else if(s=="HOLA") x="SPANISH";
            else if(s=="BONJOUR") x="FRENCH";
            else if(s=="CIAO") x="ITALIAN";
            else if(s=="ZDRAVSTVUJTE") x="RUSSIAN";
            else x="UNKNOWN";
            cout << "Case " << i << ": "<< x << "\n";
        }
    }
}
