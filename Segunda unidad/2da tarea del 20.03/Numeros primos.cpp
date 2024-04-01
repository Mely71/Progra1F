#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	bool esPrimo = true;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>> num;
	
	if (num <= 1) {
		cout<<"El numero no es primo."<<endl;
		return 0;
	}
	for (int x = 2; x < num; x++) {
		if (num % x == 0) {
			esPrimo = false;
			break;
		}
	}
	if (esPrimo) {
		cout<<"El numero es primo."<<endl;
	}else {
		cout<<"El numero no es primo."<<endl;
	}
	return 0;
}

