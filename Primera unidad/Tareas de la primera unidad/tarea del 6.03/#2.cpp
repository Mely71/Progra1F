#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	cout<<"Necesitas licencia? 1. Si 2. No"<<endl;
	int licencia;
	cin>>licencia;
	if (licencia == 1) {
		cout<<"Si necesitas licencia "<<endl;
		cout<<"Eres mayor de edad? 1. Si 2. NO"<<endl;
		int edad;
		cin>>edad;
		if (edad == 1) {
			cout<<"Tienes todos los documentos necesarios? 1. Si 2. NO "<<endl;
			int documentos;
			cin>> documentos;
			if (documentos == 1) {
				cout<<"Si tiene los documentos necesarios. "<<endl;
			}else {
				cout<<"NO, no tiene los docuemtos necesarios. ";
			}
		}else {
			cout<<"No es mayor de edad. "<<endl;
			cout<<"Al menos tienes los 16 años cumplidos? 1. Si 2. No"<<endl;
			int cumplidos;
			cin>>cumplidos;
			if (cumplidos == 1) {
				cout<<"Tus padres ya te dieron permiso? 1. Si 2. NO "<<endl;
				int permiso;
				cin>> permiso;
				if (permiso == 1) {
					cout<<"Si te dieron permiso."<<endl;
					cout<<"Puedes empezar con tu papeleo para sacar tu licencia. ";
				}else {
					cout<<"No te dieron permiso.";
				}
			}
		}
	} else {
		cout<<"No, no necesita licencia. ";
	}
	
	
	
	return 0;
}

