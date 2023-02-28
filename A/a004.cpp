#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Year;
    while(cin >> Year)
    {
        if(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)
        {
            cout << "閏年" << "\n";
        }
        else
        {
            cout << "平年" << "\n";
        }        
    }
 
    return 0;
}
