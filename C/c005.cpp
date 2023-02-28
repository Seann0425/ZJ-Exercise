#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,sum=0;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> b;
        for(int j=0;j<b;j++)
        {
            cin >> c >> d >> e;
            sum += c*e;
        }
        cout << sum << endl;
        sum = 0;
    }
}
