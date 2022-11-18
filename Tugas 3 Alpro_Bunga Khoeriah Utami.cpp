#include <iostream>
using namespace std;

int main (){
	cout << "Bunga Khoeriah Utami\n";
	cout << "1C Informatika\n";
	// Menukarkan 2 Variabel tanpa Variabel Sementara
	int a, b;
	a = 53; //Variabel Awal
	b = 20; //Variabel Awal
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
	cout << "A : " << a << endl << "B : " << b;
	return 0;
	
} 
