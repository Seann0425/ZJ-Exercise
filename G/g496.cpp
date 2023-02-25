#include <bits/stdc++.h>
using namespace std;

int main()
{
    int B,S;
    while(cin >> S >> B)
    {
        if(B%S != 0)
        {
            cout << B/S+1 << "\n";
        }
        else
        {
           cout << B/S << "\n"; 
        }
        
    }
}
