#include <iostream>
using namespace std;

int main (){ 
	cout << "Bunga Khoeriah Utami\n";
	cout << "1C Informatika\n";
	// Tugas 2
	// Menurkan 2 Variabel dengan bantuan Variabel Sementara
	int p, q, r;
	p = 53; //Variabel awal 
	q = 20; //Variabel awal 
	
	r = p; // Variabel r ditukar dengan Variabel p yang bernilai 53
	p = q; // Variabel p ditukar dengan Variabel q yang bernilai 20
	q = r; // Variabel q ditukar dengan Variabel r yang bernilai 53
	
	cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara\n";
	cout << "P : " << p << endl << "Q : " << q << endl;
	return 0;
}
