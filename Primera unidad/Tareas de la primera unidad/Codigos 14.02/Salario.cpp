#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	cout << "Ingrese su salario: ";
	int salario;
	cin >> salario;
	
	if (salario == 2800) 
	{
		cout<< "Es igual";
	}
	if (salario > 2800) 
	{
		cout<< "Es mayor";
	}
	if (salario < 2800) 
	{
		cout<< "Es menor";
	}
	return 0;
}

