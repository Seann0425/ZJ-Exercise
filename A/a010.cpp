#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int Counter=0;
    while(cin >> N)
    {
        for (int i = 2; N!=1; i++)
        {
            if(N%i!=0)
            {
                continue;
            }
            while(N%i==0)
            {
                N=N/i;
                Counter++;
            }
            cout << i;
            if(Counter>1)
            {
                cout << "^" << Counter;
            }
            if(N!=1)
            {
                cout << " * ";
            }
            else
            {
                cout << endl;
            }
            Counter=0;
        }
    }
    return 0;
}
