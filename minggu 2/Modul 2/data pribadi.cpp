#include <iostream>
using namespace std;

int main()
{
	///// Masukkan Nama /////
	char nama[20];
	cout << "Nama : ";
	cin.getline (nama,20);
	
	///// Masukkan NIM /////
	int nim;
	cout << "NIM  : ";
	cin >> nim;
	cin.ignore();
	
	///// Masukkan Kelas Praktikum /////
	char kelas[20];
	cout << "Kelas : ";
	cin.getline(kelas,20);
	
	///// Masukkan Jenis Kelamin /////
	char jenis_kelamin [20];
	cout << "Jenis Kelamin (L/P): ";
	cin.getline(jenis_kelamin,20);
	
	///// Masukkan Alamat /////
	char alamat [30];
	cout << "Alamat : ";
	cin.getline(alamat,30);
	
	///// Masukkan Email /////
	char email [30];
	cout << "E-mail : ";
	cin.getline(email,30);
	
	///// Masukkan No. Hp /////
	int nomer_hp;
	cout << "No. Hp : ";
	cin >> nomer_hp;
	cin.ignore();
	
	
	
	cin.get();
	return 0;
}

	
	
	
