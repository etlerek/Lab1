#include <iostream>
#include <conio.h>

using namespace std;
double tab1[2][3] /* = { { 2 , 3 , 4 }, { 5 , 6 , 7 } } */;
double tab2[2][3] /* = { { -5 , 4.5 , 3 }, { 5 , 12 , 8 } } */;

int main()
{
    cout << "\nWprowadz (oddzielajac spacja) wszstkie argumenty dla macierzy1 2x3:\n\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cin >> tab1[i][j];
        }
    }
    cout << "\nWprowadz (oddzielajac spacja) wszstkie argumenty dla macierzy2 2x3:\n\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cin >> tab2[i][j];
        }
    }

    cout << "\nSuma macierzy1 i macierzy2:\n\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << tab1[i][j] + tab2[i][j] << "\t";
        }
        cout << endl;
    }

    getch();
    return 0;
}
