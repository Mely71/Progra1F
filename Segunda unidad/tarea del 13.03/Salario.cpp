#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int salario;
	
	cout<<"Ingrese su salario: "<<endl;
	cin>>salario;
	
	if (salario <= 15000) {
		cout<<"Debe pagar el 5% de impuesto al mes. ";
	}
	else if (salario >= 15001 && salario <= 30000) {
		cout<<"Debe pagar el 12% de impuesto al mes. ";
	}
	else if (salario >= 30001) {
		cout<<"Debe pagar el 21% de impuesto al mes. ";
	}
	
	return 0;
}

