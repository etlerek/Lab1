#include <iostream>
#include <conio.h>

using namespace std;

int x[100]/*= { 100, 2, 30, 5, 8, 34, 56, 78, 90 }*/;
int y, n;

int main(int argc, char* argv[])
{
    cout << "Podaj ilosc argumentow ktore bedziesz sortowac: ";
    cin >> n;

    cout << endl << "Wpisz argumenty ktore chcesz posortowac (wpisuj oddzielajac spacja):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j=n-1; j>=1 ; j--) 
        {
            if (x[j] < x[j - 1])
            {
                y = x[j - 1];
                x[j - 1] = x[j];
                x[j] = y;
            }
        }
    }
    cout << endl;
    cout << "Argumenty posortowane rosnaco:\n";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "\n";
    cin >> n;

    getch();

    return 0;
}