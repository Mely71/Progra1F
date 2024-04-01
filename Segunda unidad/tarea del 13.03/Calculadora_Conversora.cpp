#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float num; 
	int opc;
	
	cout<<"Ingrese una cantidad: "<<endl;
	cin>>num;
	
	cout<<"A que deseas convertirlo? "<<endl;
	
	cout<<"1. Kms a metros"<<endl;
	cout<<"2. Metros a Kms"<<endl;
	cout<<"3. Pies a pulgadas"<<endl;
	cout<<"4. Pulgadas a pies"<<endl;
	cout<<"5. Kms a millas"<<endl;
	cin>> opc;
	if (opc == 1) {
		int	kms;
		kms = num * 1000;
		cout<<"Los Kms convertidos a metros son: "<<kms;
	}
	else if (opc == 2) {
		float mts;
		mts = num / 1000;
		cout<<"Los metros convertidos a Kms son: "<<mts;
	}
	else if (opc == 3) {
		float pulg;
		pulg = num * 12;
		cout<<"Los pies convertidos a pulgadas son: "<<pulg;
	}
	else if (opc == 4) {
		float pie;
		pie = num / 12;
		cout<<"Las pulgadas convertidos a pies son: "<<pie;
	}
	else if (opc == 5) {
		float millas;
		millas = num / 1.609;
		cout<<"Los kms convertidos a millas son: "<<millas;
	}
	return 0;
}

