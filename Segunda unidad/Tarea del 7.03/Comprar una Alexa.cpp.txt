#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Comprare una Alexa echo dot, ¿me ayudas a ver donde comprarla? \n 1) Si \n 2) no \n";
	int Alexa;
	cin >> Alexa;
	if (Alexa == 1){
		cout << "¿tengo dinero? \n 1) Si \n 2) No \n";
		int dinero;
		cin >> dinero;
		if ( dinero == 1){
			cout << "Si tengo dinero, ¿En donde la comprare? \n 1) Intelaf \n 2) En línea \n";
			int tengo;
			cin >> tengo;
			if (tengo == 1){
				cout << "Ir a ver en Intelaf, ire a Interplaza a buscarlo, ¿Hay en existencia? \n 1) Si \n 2) No \n ";
				int buscarlo;
				cin >> buscarlo;
				if (buscarlo == 1){
					cout << "Si hay en existencia, ¿Nos parece muy bien? \n 1) Si \n 2) No \n";
					int existencia;
					cin >> existencia;
					if (existencia == 1){
						cout << "Lo compramos, cancelamos en caja y nos vamos a casa";
					} 
					else {
						cout << "No nos convence el estilo, mejor encargamos uno bajo pedido, lo cancelamos y esperamos el día hasta que ya esta e ir a recogerlo";
					}
				}else {
					cout << "No hay en existencia, ¿lo pedimos bajo pedido? \n 1) Si \n 2) No \n ";
					int hay;
					cin >> hay;
					if (hay == 1){
						cout << "Lo pedimos bajo pedido, cancelamos el total y esperamos el día en el cual ya este disponible en la sucursal";
					}else {
						cout << "No, mejor lo iremos a ver despues";
					}
				}
			}else {
				cout << "Buscarlo en Línea, ver en las paginas web's, ¿se logro encontrar alguno en existencia? \n 1) Si \n 2) No \n";
				int linea;
				cin >> linea;
				if (linea == 1){
					cout << "Si ecnontre uno en línea y realizare el pedido, pagare y esperare cuando llegue el pedido en el día que me dijeron";
			    }else {
					cout << "No pude encontrar ninguno en existencia, así que lo buscare en otra ocasión";
			    }
			}
		}else {
			cout << "No tengo dinero, tendre que ir a trabajar para poder tener dinero";
		}
	} else {
		cout << "No quiero ayudarte";
	}
		
	return 0;
}

