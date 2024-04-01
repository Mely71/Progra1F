#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	cout<<"Ingrese el 1er valor: "<<endl;
	cin>>num1;
	
	cout<<"Ingrese el 2do valor: "<<endl;
	cin>>num2;
	
	if (num1 == num2) {
		cout<<"Los numeros son iguales ";
	}
	else {
		cout<<"Los numeros son diferentes ";
	}
	return 0;
}

