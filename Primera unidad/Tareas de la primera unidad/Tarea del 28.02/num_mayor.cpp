#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	cout<<"Ingrese el 1er valor: "<<endl;
	cin>>num1;
	cout<<"Ingrese el 2do valor: "<<endl;
	cin>>num2;
	
	if (num1 > num2) {
		cout<< "El numero 1 es mayor que el numero 2 "<<endl;
	}
	else {
		cout<<"EL numero 2 es mayor que el numero 1 ";
	}
	return 0;
}
