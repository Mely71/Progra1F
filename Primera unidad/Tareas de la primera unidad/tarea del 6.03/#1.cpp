#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	cout<<"Necesitas una moto? 1. Si 2. No "<<endl;
	int mt;
	cin>> mt;
	if (mt == 1) {
		cout<<"Si necesita una moto, vamos a buscarla";
		cout<<endl;
		cout<<"Tienes dinero? 1. Si 2. NO "<<endl;
		int dinero_mt;
		cin>> dinero_mt;
		if (dinero_mt == 1) {
			cout<<"Si hay dinero"<<endl;
			cout<<"Cuanto dinero tienes?"<<endl;
			double dinero_ahorrado;
			cin>>dinero_ahorrado;
			cout<<"Cuanto cuesta la moto que quieres? "<<endl;
			double dinero_mt_comp;
			cin>> dinero_mt_comp;
			if (dinero_ahorrado > dinero_mt_comp) {
				cout<<"Si te alcanza, puedes comprarla"<<endl;
				cout<<"Ya puedes empezar con el papeleo de la moto.";
			} else {
				cout<<"No te alcanza, aun no puedes comprarla"<<endl;
				cout<<"Aun no puedes empezar en el papeleo de la moto.";
			}
		} else {
			cout<<"No hay dinero.";
		}
	}else {
		cout<<"NO, no la necesita";
	}
	
	return 0;
}

