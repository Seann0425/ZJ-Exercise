#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int numbers[10][5][3] = {
        {0,1,0,1,0,1,0,0,0,1,0,1,0,1,0},//0
        {0,0,0,0,0,1,0,0,0,0,0,1,0,0,0},//1
        {0,1,0,0,0,1,0,1,0,1,0,0,0,1,0},//2
        {0,1,0,0,0,1,0,1,0,0,0,1,0,1,0},//3
        {0,0,0,1,0,1,0,1,0,0,0,1,0,0,0},//4
        {0,1,0,1,0,0,0,1,0,0,0,1,0,1,0},//5
        {0,1,0,1,0,0,0,1,0,1,0,1,0,1,0},//6
        {0,1,0,0,0,1,0,0,0,0,0,1,0,0,0},//7
        {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},//8
        {0,1,0,1,0,1,0,1,0,0,0,1,0,1,0}//9
    };
    int s;
    string n;
    while(cin >> s >>n){
        if(s==0) break;
        for(int c=0;c<5;c++){
            if(c%2){
               for(int t=0;t<s;t++){
                   for(int m=0;m<n.size();m++){
                       if(numbers[n.at(m)-'0'][c][0]) cout << "|";
                       else cout << " ";
                       for(int p=0;p<s;p++){
                           cout << " ";
                       }
                       if(numbers[n.at(m)-'0'][c][2]) cout << "|";
                       else cout << " ";
                       cout << " ";
                   }
                   cout << endl;
               } 
            }
            else{
                for(int m=0;m<n.size();m++){
                    cout << " ";
                    for(int t=0;t<s;t++){
                        if(numbers[n.at(m)-'0'][c][1]) cout << "-";
                        else cout << " ";
                    }
                    cout << " ";
                    cout << " ";
                }
                cout << endl;
            }
        }
    }
}
