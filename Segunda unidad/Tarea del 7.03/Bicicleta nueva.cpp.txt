#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "¿Tengo Bicicleta nueva? \n 1) Si \n 2) No \n";
	int Bicicleta;
	cin >> Bicicleta;
	if (Bicicleta == 1) {
		cout << "Si tengo bicicleta nueva, ¿Incluye algo la bicicleta? \n 1) Si \n 2) No \n ";
		int Incluye;
		cin >> Incluye;
		if (Incluye == 1) {
			cout << "Contiene casco, rodilleras y ruedas de seguridad, ¿usarás alguna de esas? \n 1) Si \n 2) No \n ";
			int usaras;
			cin >> usaras;
			if (usaras == 1) {
				cout << "¿Qué usarás? \n 1) Casco y rodilleras \n 2) Rueditas de seguridad \n";
				int Que;
				cin >> Que;
				if (Que == 1) {
					cout << "Usare casco y rodilleras, ¿subirse a la bicicleta? \n 1) Si \n 2) No \n";
					int subirse;
					cin >> subirse;
					if (subirse == 1){
						cout << "Me subire a la bicicleta, ¿se manejar bicicleta? \n 1) Si \n 2) No \n";
						int subire;
						cin >> subire;
						if (subire == 1) {
							cout << "Si se manejar bicicleta y manejare con precaución, viendo si la calle esta libre de vehiculos o no";
						}else {
							cout << "No puedo manejar bicicleta y luego aprendere, ya que buscare a alguien que me ayude a utilizar mi nueva bicicleta";
	                    }
					}else {
						cout << "No, por que no puedo manejar bicicleta y mejor voy a aprender a manejar bicicleta despues";
					}
				} else {
					cout << "Solo usaré rueditas de seguridad";
				}
			} else {
				cout << "No usare nada de lo que incluye la bicicleta, ¿manejaras? \n 1) Si \n 2) No \n";
				int manejaras;
				cin >> manejaras;
				if (manejaras == 1){
					cout << "Si manejare, estube ancioso por mi nueva bicicleta, ademas que se manejar a la perfección las bicicletas y me se las señales de transito, puedo ver siempre si hay vehiculos circulando o no"; 
				} else {
					cout << "Me dificulta manejar la bicicleta pero un amigo me ayudara a aprender de poder dominar la biciccleta";
				}
			}
		} else {
			cout << "No contiene nada, ¿subirse a la bicicleta? \n 1) Si \n 2) No \n";
			int subirse;
			cin >> subirse;
			if (subirse == 1) {
				cout << "Subirse y pedalear, ¿hay vehículos circulando por la calle? \n 1) Si \n 2) No \n";
				int vehiculos;
				cin >> vehiculos;
				if (vehiculos == 1) {
					cout << "Si hay vehículos por la calle, ¿manejar la bicicleta después? \n 1) Si \n 2) No \n ";
					int despues;
					cin >> despues;
					if (despues == 1) {
						cout << "Manejar la bicicleta después ya que hay tráfico y no tener accidentes";
					} else {
						cout << "Manejar de todas formas y arriesgarse a tener algún accidente";
					}
				} else {
					cout << "Pedalear con tranquilidad";
				}
			} else {
				cout << "No subirse a la bicicleta, ya que no tiene con que protegerme";
			}
		}
	} else {
		cout << "No tengo bicicleta nueva :( soy pobre";
	}
	
	return 0;
}

