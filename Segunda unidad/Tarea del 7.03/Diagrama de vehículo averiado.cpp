#include <iostream>
using namespace std;

int main() {
	bool estado_auto = 0, acceso_internet, acceso_directorio, aceite_motor = 0;
	bool llanta_repuesto, aceite_volante = 0, estado_tuerca;
	int tipo_averia;
	
	cout<<"�El auto se averi�?"<<endl;
	cout<<"S�. (1)"<<endl;
	cout<<"No. (0)"<<endl;
	cin>>estado_auto;
	if(estado_auto == 1){
		cout<<"�Cu�l es la aver�a?"<<endl;
		cout<<"Una polea.(1)"<<endl;
		cout<<"Aceite de motor.(2)"<<endl;
		cout<<"Aceite de volante.(3)"<<endl;
		cout<<"Llanta estallada.(4)"<<endl;
		cout<<"Cig�e�al.(5)"<<endl;
		cin>>tipo_averia;
		
		if(tipo_averia == 1){
			cout<<"�Se tiene acceso a internet?"<<endl;
			cout<<"S�. (1)"<<endl;
			cout<<"No. (0)"<<endl;
			cin>>acceso_internet;
			
			if(acceso_internet == 1){
				cout<<"Buscar un mec�nico, elegir uno e ir con �l."<<endl;
			}
			else{
				cout<<"�Se tiene acceso a un directorio?"<<endl;
				cout<<"S�. (1)"<<endl;
				cout<<"No. (0)"<<endl;
				cout<<endl;
				cin>>acceso_directorio;
				if(acceso_directorio == 1){
					cout<<"Buscar uno en el directorio."<<endl;
				}
				else{
					cout<<"Llamar a un familiar o a un amigo, luego ir con un mecanico."<<endl;
				}
			}
		}
		
		if(tipo_averia == 2){
			cout<<"Acceso a un litro de aceite para el motor."<<endl;
			cout<<"S�. (1)"<<endl;
			cout<<"No. (0)"<<endl;
			cout<<endl;
			cin>>aceite_motor;
			if(aceite_motor == 1){
				cout<<"Rellenar el dep�sito."<<endl;
			}
			else{
				cout<<"�Se tiene acceso a internet?"<<endl;
				cout<<"S�. (1)"<<endl;
				cout<<"No. (0)"<<endl;
				cout<<endl;
				cin>>acceso_internet;
				if(acceso_internet == 1){
					cout<<"Buscar un mec�nico, elegir uno e ir con �l."<<endl;
				}
				else{
					cout<<"�Se tiene acceso a un directorio?";
					cout<<"S�. (1)"<<endl;
					cout<<"No. (0)"<<endl;
					cout<<endl;
					cin>>acceso_directorio;
					if(acceso_directorio == 1){
						cout<<"Buscar uno en el directorio."<<endl;
					}
					else{
						cout<<"Llamar a un familiar o a un amigo, luego ir con un mecanico."<<endl;
					}
				}
			}
		}
		
		if(tipo_averia == 3){
			cout<<"Acceso a un litro de aceite para el volante."<<endl;
			cout<<"S�. (1)"<<endl;
			cout<<"No. (0)"<<endl;
			cout<<endl;
			cin>>aceite_volante;
			if(aceite_volante == 1){
				cout<<"Rellenar el dep�sito."<<endl;
			}
			else{
				cout<<"�Se tiene acceso a internet?"<<endl;
				cout<<"S�. (1)"<<endl;
				cout<<"No. (0)"<<endl;
				cout<<endl;
				cin>>acceso_internet;
				if(acceso_internet == 1){
					cout<<"Buscar un mec�nico, elegir uno e ir con �l."<<endl;
				}
				else{
					cout<<"�Se tiene acceso a un directorio?";
					cout<<"S�. (1)"<<endl;
					cout<<"No. (0)"<<endl;
					cout<<endl;
					cin>>acceso_directorio;
					if(acceso_directorio == 1){
						cout<<"Buscar uno en el directorio."<<endl;
					}
					else{
						cout<<"Llamar a un familiar o a un amigo, luego ir con un mecanico."<<endl;
					}
				}
			}
		}
		
		if(tipo_averia == 4){
			cout<<"Se tiene llanta de repuesto: ";
			cout<<"S�. (1)"<<endl;
			cout<<"No. (0)"<<endl;
			cout<<endl;
			cin>>llanta_repuesto;
			if(llanta_repuesto == 1){
				cout<<"Colocarla."<<endl;
			}
			else{
				cout<<"�Se tiene acceso a internet?"<<endl;
				cout<<"S�. (1)"<<endl;
				cout<<"No. (0)"<<endl;
				cout<<endl;
				cin>>acceso_internet;
				if(acceso_internet == 1){
					cout<<"Buscar un mec�nico, elegir uno e ir con �l."<<endl;
				}
				else{
					cout<<"�Se tiene acceso a un directorio?";
					cout<<"S�. (1)"<<endl;
					cout<<"No. (0)"<<endl;
					cout<<endl;
					cin>>acceso_directorio;
					if(acceso_directorio == 1){
						cout<<"Buscar uno en el directorio."<<endl;
					}
					else{
						cout<<"Llamar a un familiar o a un amigo, luego ir con un mecanico."<<endl;
					}
				}
			}
		}
		
		if(tipo_averia == 5){
			cout<<"�Se afloj� una tuerca?"<<endl;
			cout<<"S�. (1)"<<endl;
			cout<<"No. (0)"<<endl;
			cout<<endl;
			cin>>estado_tuerca;
			if(estado_tuerca == 1){
				cout<<"Atornillarla."<<endl;
			}
			else{
				cout<<"�Se tiene acceso a internet?"<<endl;
				cout<<"S�. (1)"<<endl;
				cout<<"No. (0)"<<endl;
				cout<<endl;
				cin>>acceso_internet;
				if(acceso_internet == 1){
					cout<<"Buscar un mec�nico, elegir uno e ir con �l."<<endl;
				}
				else{
					cout<<"�Se tiene acceso a un directorio?";
					cout<<"S�. (1)"<<endl;
					cout<<"No. (0)"<<endl;
					cout<<endl;
					cin>>acceso_directorio;
					if(acceso_directorio == 1){
						cout<<"Buscar uno en el directorio."<<endl;
					}
					else{
						cout<<"Llamar a un familiar o a un amigo, luego ir con un mecanico."<<endl;
					}
				}
			}
		}
	}
	
	else{
		cout<<"El auto no necesita reparaciones."<<endl;
	}
		
	return 0;
}

