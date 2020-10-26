#include <iostream>
using namespace std;

int main() {
	int x;   //mendeklarasikan variabel x
	x = 7;   // mengisikan nilai ke dalam variabel x dengan nilai 7

	//Melakukan pre-increment 
	cout << "Nilai x awal      : " << x << endl;
	cout << "Nilai ++x akhir   : " << ++x << endl;
	cout << "Nilai x akhir     : " << x << endl << endl;

	//Mwngubah nilai x menjadi 10
	x = 10;
	//Melakukan post-increment
	cout << "Nilai x awal      : " << x << endl;
	cout << "Nilai ++x akhir   : " << ++x << endl;
	cout << "Nilai x akhir     : " << x << endl;



	cin.get();
	return 0;
}
