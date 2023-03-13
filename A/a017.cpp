#include <bits/stdc++.h>
using namespace std;

int solve(int h, int len);
string eq;

int main(){
    while(getline(cin, eq)){
        cout << solve(0, eq.length());
    }
    return 0;
}

int solve(int h, int len){
    int a=0;
    for(int i=len-1;i>=h;i--){
        if(eq[i]==")") a++;
        if(eq[i]=="(") a--;
        if(eq[i]=="+"&&a==0){
            return solve(h, i-1)+solve(i+1, len);
        }
        if(eq[i]=="-"&&a==0){
            return solve(h,i-1)-solve(i+1,len);
        }
    }
    for(int i=len-1;i>=h;i--){
        if(eq[i]==")") a++;
        if(eq[i]=="(") a--;
    }
}
