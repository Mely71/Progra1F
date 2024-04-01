#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero, suma = 0;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	
	if (numero % 2 == 0) {
		for(int x = 2; x <= numero; x +=2) {
			suma += x;
		}
	} else {
		for(int x = 1; x <= numero; x +=2) {
			suma += x;
		}
	}
	cout<<"La suma de los numeros es: "<< suma <<endl;
	return 0;
}

