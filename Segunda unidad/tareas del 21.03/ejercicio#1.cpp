#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	cout<<"Ingrese la base: "<<endl;
	cin>>num1;
	cout<<"Ingrese el exponente"<<endl;
	cin>>num2;
	
	if (num1 > 10 || num2 > 10) {
		cout<<"Los numeros deben ser menores a 10."<<endl;
	} 
	int resultado = 1;
	for (int i = 0; i < num2; i++) {
		resultado *= num1;
	}
	cout<< num1 <<" elevado a la potencia de "<< num2 <<" es: "<< resultado <<endl;
	
	return 0;
}

