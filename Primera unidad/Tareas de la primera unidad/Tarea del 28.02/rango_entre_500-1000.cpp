#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	
	if (num >= 500 && num <= 1000) {
		cout<<"El numero esta en el rango de 500 y 1,000 ";
	}
	else {
		cout<<"EL numero no esta dentro del rango de 500 y 1,000 ";
	}
	return 0;
}

