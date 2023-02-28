#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Count;
    while(cin >> Count)
    {
        int Sequences[Count][4];
        for(int i=0;i<Count;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin >> Sequences[i][j];
            }
        }
        for(int i=0;i<Count;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout << Sequences[i][j] << " ";
            }
            if(Sequences[i][1]-Sequences[i][0] == Sequences[i][2]-Sequences[i][1])
            {
                cout << Sequences[i][3]+(Sequences[i][3]-Sequences[i][2]) << endl;
            }
            else
            {
                cout << Sequences[i][3]*(Sequences[i][3]/Sequences[i][2]) << endl;
            }
        }
    }
}
