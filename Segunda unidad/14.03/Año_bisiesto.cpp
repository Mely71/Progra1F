#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int year;
	cout<<"Ingrese un año. "<<endl;
	cin>> year;
	
	if (year % 400 == 0) {
		cout<<"Es año bisiesto. ";
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		cout<<"Es un año bisiesto. ";
	}
	else {
		cout<<"No es un año bisiesto. ";
	}
	return 0;
}

