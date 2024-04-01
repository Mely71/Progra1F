#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>> num;
	
	if (num > 0) {
		cout<<"el numero es positivo. "<<endl;
	} else {
		cout<<"El numero es negativo. "<<endl;
	}
	if (num % 2 == 0) {
		cout<<"El numero es par. "<<endl;
	}
	else {
		cout<<"EL numero el impar. "<<endl;
	}
	
	return 0;
}

