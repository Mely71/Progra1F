#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float num;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	
	if (num < 0) {
		cout<<"El numero es negativo. ";
	}
	
	if (num > 0) {
		cout<<"EL numero es positivo. ";
	}
	return 0;
}

