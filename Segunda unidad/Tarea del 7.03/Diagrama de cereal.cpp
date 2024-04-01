#include <iostream>
using namespace std;

int main() {
	bool verificar;
	int sabor;
	cout<<"Verificar si hay leche y cereal."<<endl;
	cout<<"Sí. (1)."<<endl;
	cout<<"No. (0)."<<endl;
	cin>>verificar;
	if(verificar == 1){
		cout<<"Elegir sabor de cereal: "<<endl;
		cout<<"Natural. (1)"<<endl;
		cout<<"Chocolate. (2)"<<endl;
		cout<<endl;
		cin>>sabor;
		if(sabor == 1){
			cout<<"En un recipiente mezclar la leche y el cereal."<<endl;
		}
		if(sabor == 2){
			cout<<"En un recipiente mezclar la leche y el cereal."<<endl;
		}
		
		else{
			cout<<"Opción incorrecta."<<endl;
		}
	}
	else{
		cout<<"Ir a comprar lo que haga falta y regresar a continuar."<<endl;
	}
	
	return 0;
}

