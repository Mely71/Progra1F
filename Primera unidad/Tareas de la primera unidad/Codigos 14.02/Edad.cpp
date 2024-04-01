#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//ESCRIBIR UN PROGRAMA QUE PREGUNTE AL USUARIO SU EDAD Y 
	//MUESTRE POR PANTALLA SI ES MAYOR DE EDAD O NO.
	cout << "Hola, ingrese su edad: ";
	int edad; //variable para ingresarle un valor.
	//Ingresar un valor
	cin >> edad;
	//Condicion para ver si es mayor o menor
	if (edad >= 18) {
		cout << "Hola, persona mayor de edad ";
	} 
	else {
		cout << "Hola, persona menor de edad ";
	}
	
	
	
	return 0;
}

