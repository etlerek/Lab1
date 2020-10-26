#include <iostream>
#include <conio.h>

using namespace std;
int x, y, wieksza, sumax =0, sumay=0;

int main()
{
    cout << "Podaj pierwsza liczbe: ";
    cin >> x;
    cout << "\nPodaj druga liczbe: ";
    cin >> y;

    for (int j = 1; j < x; j++)
    {
        if (x % j == 0)
        {
            sumax += j;
        }
    }

    for (int i = 1; i < y; i++)
    {
        if (y % i == 0)
        {
            sumay += i;       
        }
    }

    if (sumax == y + 1 && sumay == x + 1)
        cout << "\nLiczby " << x << " i " << y << " sa skojarzone\n";
    else
        cout << "\nLiczby " << x << " i " << y << " nie sa skojarzone\n";

    getch();
    return 0;
}
