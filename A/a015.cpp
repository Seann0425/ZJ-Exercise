#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Row, Column;
    while(cin >> Row >> Column)
    {
        int Matrix[100][100];
        for(int i=0; i<Row; i++)
        {
            for(int j=0; j<Column; j++)
            {
                cin >> Matrix[i][j];
            }
        }
        for(int q=0; q<Column; q++)
        {
            for(int r=0; r<Row; r++)
            {
                cout << Matrix[r][q] << " ";
            }
            cout << endl;
        }
    }
}
