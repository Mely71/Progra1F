#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int year;
	cout<<"Ingrese un a�o. "<<endl;
	cin>> year;
	
	if (year % 400 == 0) {
		cout<<"Es a�o bisiesto. ";
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		cout<<"Es un a�o bisiesto. ";
	}
	else {
		cout<<"No es un a�o bisiesto. ";
	}
	return 0;
}

