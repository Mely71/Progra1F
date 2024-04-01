#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string palabra1, palabra2;
	cout<<"Ingrese la 1era palabra :  "<<endl;
	cin>> palabra1;
	cout<<"Ingrese la 2da palabra:  "<<endl;
	cin>>palabra2;
	
	if (palabra1 == palabra2) {
		cout<<"Las palabras son iguales "<<endl;
	}
	
	else {
		cout<<"Las palabras son distintas ";
	}
	
	return 0;
}

