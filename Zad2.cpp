#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
string palindrom;
int dlugosc;

int main()
{
   cout << "Podaj slowo ktore ma byc palindromem: \n";
   cin >> palindrom;
   dlugosc = palindrom.length()-1;
   cout << endl;

   for (int i = 0; i < dlugosc; i++)
   {
	   if (palindrom[i] != palindrom[dlugosc - i])
	   {
		   cout << "Slowo nie jest palindromem";

         getch();
		   return 0;
	   }
   }

   cout << "Slowo jest palindromem\n";

   getch();
   return 0;
}