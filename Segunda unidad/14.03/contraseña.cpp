#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contr;
	
	cout<<"Ingrese su contraseña. "<<endl;
	cin>>contr;
	
	if (contr % 3 == 0) {
		cout<<"Bienvenido. ";
	}
	
	else {
		cout<<"Contraeña incorrecta. "<<endl;
		cout<<"Intentelo de nuevo. ";
	}
	
	return 0;
}

