#include <iostream>
using namespace std;

int main()
{
	///// SUHU CELCIUS /////
	float C;
	cout << "Masukkan Suhu (Celcius) : ";
	cin >> C;

	///// SUHU KELVIN /////
	float K;
	K = C + 273.15;
	cout << "Suhu (Kelvin) : " << K << endl;

	///// SUHU FAHRENHEIT /////
	float F;
	F = (C * 1.8) + 32;
	cout << "Suhu (Fahrenheit) : " << F << endl;

	///// SUHU REAMUR /////
	float R;
	R = C * 0.8;
	cout << "Suhu (Reamur) : " << R << endl;

	cin.get();
	return 0;
}
