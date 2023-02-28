#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,D;
    while(cin >> a >> b >> c)
    {
        D=pow(b,2)-4*a*c;
        if(D>0)
        {
            cout << "Two different roots x1=" << (-b+sqrt(D))/2*a << " , x2=" << (-b-sqrt(D))/2*a << endl;
        }
        else if(D == 0)
        {
            cout << "Two same roots x=" << (-b)/(2*a) << endl;
        }
        else
        {
            cout << "No real root" << endl;
        }
    }
}
