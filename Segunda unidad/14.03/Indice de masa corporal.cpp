#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float peso, altura, IMC;
	
	cout<<"Ingrese el peso. "<<endl;
	cin>> peso;
	cout<<"Ingrese la altura. "<<endl;
	cin>> altura;
	
	IMC= peso / altura*altura;
	
	if (IMC <= 18.5) {
		cout<<"Peso bajo. ";
	}
	else if (IMC > 18.5 && IMC < 25) {
		cout<<"Peso normal. ";
	}
	else if (IMC > 25 && IMC < 30) {
		cout<<"Sobrepeso";
	}
	else if (IMC >= 30) {
		cout<<"Obesidad.";
	}
	
	return 0;
}

