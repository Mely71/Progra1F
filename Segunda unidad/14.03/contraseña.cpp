#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contr;
	
	cout<<"Ingrese su contraseņa. "<<endl;
	cin>>contr;
	
	if (contr % 3 == 0) {
		cout<<"Bienvenido. ";
	}
	
	else {
		cout<<"Contraeņa incorrecta. "<<endl;
		cout<<"Intentelo de nuevo. ";
	}
	
	return 0;
}

