#include <iostream>
using namespace std;

int main()
{
	cout << "Masukkan : ";
	cout <<endl;
	
	char nama [30];
	cout << "Nama : ";
	cin.getline (nama,30);
	
	int nim;
	cout << "NIM : ";
	cin >>nim;
	cin.ignore();
	
	char plug [30];
	cout << "Plug : ";
	cin.getline (plug,30);
	cout <<endl;
	
	cout << "Inilah data Anda : " <<endl;
	cout << "Nama : " <<nama<<endl;
	cout << "NIM  : " <<nim<<endl;
	cout << "Plug : " <<plug<<endl<<endl;
	
	cout << "Dalam bentuk tabel	: " << endl;
	cout << "================================================================" << endl;
	cout << "     NIM	  "<< "|" <<"	     Nama         " << "|" << "      Plug	" << endl;
	cout << "================================================================" << endl;
	cout << "   " << nim << "         " <<	nama <<"         " <<		plug << endl;
	cout << "================================================================";
	
	cin.get();
	return 0;
}
