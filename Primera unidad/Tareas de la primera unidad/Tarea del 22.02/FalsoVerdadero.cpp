#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool aprovaste = false; 
	int num;
	cout<<"Ingrese un numero mayor a 61 para aprobar el examen";
	cin>>num;
	
	if (num >= 61) {
		aprovaste = true;
	}
	else {
		aprovaste = false;
	}
	if (aprovaste == true) {
		cout<<"si aprovaste el examen ";
	}
	else {
		cout<<"Reprovamos el examen ";
	}
	return 0;
}

