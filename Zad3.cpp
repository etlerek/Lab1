#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

double BMI, wzrost, waga;
string status;

int main()
{
	cout << "Podaj swoja mase ciala (w kg): ";
	cin >> waga;
	cout << "\nPodaj swoj wzrost: ";
	cin >> wzrost;

	if (wzrost > 3)
		wzrost /= 100;

	BMI = (waga) / (wzrost * wzrost);

	if (BMI < 16)
		status = "wyglodzenie";
	if (BMI >= 16 && BMI < 17)
		status = "wychudzenie";
	if (BMI >= 17 && BMI < 18.5)
		status = "niedowaga";
	if (BMI >= 18.5 && BMI < 25)
		status = "wartosc prawidlowa";
	if (BMI >= 25 && BMI < 30)
		status = "nadwaga";
	if (BMI >= 30 && BMI < 35)
		status = "I stopien otylosci";
	if (BMI >= 35 && BMI < 40)
		status = "II stopien otylosci";
	if (BMI > 40)
		status = "otylosc skrajna";

	cout << "\nTwoja wartosc BMI wynosi: " << setprecision(4) << BMI << " - " << status;

 	getch();
	return 0;
}

