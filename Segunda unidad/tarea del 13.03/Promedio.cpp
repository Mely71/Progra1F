#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int not_1, not_2, not_3, not_4, not_5, prom;
	
	cout<<"Ingrese las notas del estudiante: "<<endl;
	cin>>not_1;
	cin>>not_2;
	cin>>not_3;
	cin>>not_4;
	cin>>not_5;
	
	prom= (not_1 + not_2 + not_3 + not_4 +not_5) / 5;
		
	if (prom <= 61) {
		cout<<"No tiene permitido hacer su examen privado. ";
	}
	else if (prom >= 61 && prom <= 75 ) {
		cout<<"Si realiza trabajo comunitario, puede hacer su examen privado. ";
	}
	else if (prom >= 76 && prom <= 85) {
		cout<<"Promedio normal, puede hacer su examen privado. ";
	} 
	else if (prom >= 86 && prom <= 90) {
		cout<<"Promedio alto, si se gradua sera con honores. ";
	}
	else if (prom >= 91 && prom <= 95) {
		cout<<"Promedio muy alto, si se gradua sera con maximos honores. ";
	}
	else if (prom >= 95) {
		cout<<"Puede exonearse de examen privado. ";
	}
	
	
	return 0;
}

