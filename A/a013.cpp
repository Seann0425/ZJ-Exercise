#include <bits/stdc++.h>
using namespace std;

//variables
char RomanNumbers[7] = {'M','D','C','L','X','V','I'};
int DemicalNumbers[7] = {1000,500,100,50,10,5,1};
string TransR[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int TransD[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
int Value;
//function_1
int RomanToDemical(string Roman)
{
    Value = 0;
    //case 1
    if(Roman.size()==1)
    {
        for(int i=0; i<7; i++)
        {
            if(Roman[0] == RomanNumbers[i])
            {
                Value = DemicalNumbers[i];
                break;
            }
        }
    }
    //case 2
    else
    {
        for(int i=0; i<=Roman.size()-2; i++)
        {
            for(int j=0; j<7; j++)
            {
                if(Roman[i]==RomanNumbers[j])
                {
                    Value+=DemicalNumbers[j];
                    break;
                }
                if(Roman[i]!=RomanNumbers[j])
                {
                    if(Roman[i+1] == RomanNumbers[j])
                    {
                        Value+=DemicalNumbers[j];
                        for(int k=j+1; k<7; k++)
                        {
                            if(Roman[i] == RomanNumbers[k])
                            {
                            Value-=DemicalNumbers[k];
                            break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                        i++;
												break;
                    }
                }
            }
        }
        for(int i=0; i<7; i++)
        {
            if(Roman[Roman.size()-1] == RomanNumbers[i])
            {
                for(int j=0; j<7; j++)
                {
                    if(Roman[Roman.size()-2] == RomanNumbers[j] && DemicalNumbers[j] >= DemicalNumbers[i] )
                    {
                        Value+=DemicalNumbers[i];
                        break;
                    }
                }
            }
        }
    }
    return Value;
}
//function_2
void DemicalToRoman(int Demical)
{
    for(int i=0; i<13; i++)
    {
        while(Demical >= TransD[i])
        {
            cout << TransR[i];
            Demical-=TransD[i];
        }
    }
    cout << endl;
}


int main()
{
    string RomanNumeral_1, RomanNumeral_2;
    int v1, v2;
    while(cin >> RomanNumeral_1 >> RomanNumeral_2)
    {
        v1 = RomanToDemical(RomanNumeral_1);
        v2 = RomanToDemical(RomanNumeral_2);
       if(fabs(v1-v2) == 0)
        {
            cout << "ZERO" << endl;
        }
        else
        {
            DemicalToRoman(fabs(v1-v2));
        }
    }
    return 0;
}
