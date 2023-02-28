#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Code;
    while(getline(cin,Code))
    {
        for(int i=0;i<Code.size();i+=1)
        {
           cout << char(Code[i]-7) ;
        }
        cout << endl;
    }
}
