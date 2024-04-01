#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int edad_1, edad_2;
	
	cout<<"Ingrese la edad de la primera persona: "<<endl;
	cin>>edad_1;
	cout<<"Ingrese la edad de la segunda persona: "<<endl;
	cin>>edad_2;
	
	if (edad_1 >= 18 && edad_2 >= 18) {
		cout<<"Son mayores de edad ";
	}
	if (edad_1 >= 18 && edad_2 <= 17) {
		cout<<"Solo uno es mayor de edad ";
	}
	if (edad_1 <= 17 && edad_2 <= 17) {
		cout<<"Ninguno de los dos son mayores de edad ";
	}
	
	
	return 0;
}

