#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num_1, num_2, num_3, prom;
	
	cout<<"Ingrese la primera nota: "<<endl;
	cin>>num_1;
	
	cout<<"Ingrese la segunda nota: "<<endl;
	cin>>num_2;
	
	cout<<"Ingrese la tercera nota: "<<endl;
	cin>>num_3;
	
	prom = (num_1 + num_2 + num_3) / 3;
	
	cout<<"Su promedio es de: "<<prom<<endl;
	
	if (prom >= 61) {
		cout<<"Sus cursos estan en limpio";
	}
	else {
		cout<<"Debe tener en limpio sus cursos";
	}
	
	return 0;
}

