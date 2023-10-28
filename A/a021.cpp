#include <bits/stdc++.h>
#define int long long
using namespace std;

void initial(string &a, string &b){
    while(a.size()<b.size()) a='0'+a;
    while(b.size()<a.size()) b='0'+b;
}

bool findMax(string &a, string &b){
    if(a<b){
        swap(a, b);
        return true;
    }
    return false;
}

bool del(string &a){
    if(a[0]=='0'){
        a.erase(0,1);
        return true;
    }
    else return false;
}

void DelAllZero(string &a){
    while(del(a)){
        del(a);
    }
}

string add(string a, string b){
    initial(a, b);
    a='0'+a;
    b='0'+b;
    for(int i=a.size()-1;i>=0;i--){
        int num1=a[i]-'0';
        int num2=b[i]-'0';
        if(num1+num2>9){
            a[i-1]=a[i-1]-'0'+1+'0';
            a[i]=(num1+num2-10)+'0';
        }
        else a[i]=(num1+num2)+'0';
    }
    del(a);
    return a;
}

string sub(string a, string b){
    initial(a,b);
    if(a==b) return "0";
    int ngtv=findMax(a,b);
    for(int i=a.size()-1;i>=0;i--){
        int num1=a[i]-'0';
        int num2=b[i]-'0';
        if(num1<num2){
            a[i-1]=a[i-1]-'0'-1+'0';
            a[i]=(num1-num2+10)+'0';
        }
        else a[i]=(num1-num2)+'0';
    }
    DelAllZero(a);
    if(ngtv) return "-"+a;
    return a;
}

string mul(string a, string b){
    initial (a,b);
    findMax(a, b);
    string res ="0";
    DelAllZero(b);
    for(int i=b.size()-1;i>=0;i--){
        int num1=b[i]-'0';
        if(i!=b.size()-1) a=a+'0';
        for(int j=1;j<=num1;j++){
            res=add(a,res);
        }
    }
    return res;
}

string div(string a, string b){
    initial(a, b);
    if(a<b) return "0";
    DelAllZero(b);
    string res="0";
    string restmp ="1";
    string tmp=b;
    //cout << a.size()-b.size() << "\n";
    for(int i=0;i<(a.size()-b.size());i++){
        tmp+='0';
        restmp+='0';
    }
    initial(a,b);
    while(a>=b){
        initial(a,tmp);
        if(a>=tmp){
            a=sub(a,tmp);
            res=add(res,restmp);
        }
        else{
            tmp.erase(tmp.size()-1);
            restmp.erase(restmp.size()-1);
        }
        initial(a,b);
    }
    return res;
}

void run(string &op, string &a, string &b){
    if(op == "+") cout << add(a, b) << "\n";
    if(op == "-") cout << sub(a, b) << "\n";
    if(op == "*") cout << mul(a, b) << "\n";
    if(op == "/") cout << div(a, b) << "\n";
}

signed main(){
    string a, b, op;
    cin >> a >> op >> b;
    run(op, a, b);
}
