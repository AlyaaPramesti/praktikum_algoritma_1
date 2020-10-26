#include <iostream>
using namespace std;

int main()
{
	cout << "Nama : Alyaa Pramesti Utari" <<endl;
	cout << "NIM  : 123200157" <<endl;
	cout << "-------------------------------" <<endl;
	
	float phi = 3.14;
	float rusuk, tinggi, s;
	float luas_permukaan;
	
	/// Menghitung Luas Permukaan Kerucut ///
	cout << "MENGHITUNG LUAS PERMUKAAN KERUCUT" << endl << endl;
	cout << "Masukkan Rusuk : ";
	cin >> rusuk;
	cout << "Masukkan Tinggi : ";
	cin >> tinggi;
	cout << "Masukkan S : ";
	cin >> s;
	cout << endl << endl;
	
	// RUMUS LUAS PERMUKAAN KERUCUT //
	luas_permukaan = phi * rusuk * (rusuk+s);
	cout << "Luas Permukaan Kerucut : " << luas_permukaan;
	
	
	cin.get();
	return 0;
	
}
	
