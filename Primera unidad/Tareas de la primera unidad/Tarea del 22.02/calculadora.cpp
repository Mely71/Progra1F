#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int opcion = 0;
	float num1;
	float num2;
	float res;
	
	cout<<"Que es lo que necesitas hacer? "<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicacion"<<endl;
	cout<<"4. division"<<endl;
	cin>>opcion;
	
	if (opcion == 1){
		cout<<"suma"<<endl;
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		res =(num1+num2);
		cout<<"El resultado de la suma es de: " <<res <<endl;
	}
	
	if (opcion == 2){
		cout<<"resta"<<endl;
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		res =(num1-num2);
		cout<<"El resultado de la resta es de: " <<res <<endl;
	}
	
	if (opcion == 3){
		cout<<"multiplicacion"<<endl;
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		res =(num1*num2);
		cout<<"El resultado de la multiplicacion es de: " <<res <<endl;
	}
	
	if (opcion == 4){
		cout<<"division"<<endl;
		cout<<"Ingrese el primer valor: ";
		cin>>num1;
		cout<<"Ingrese el segundo valor: ";
		cin>>num2;
		res =(num1/num2);
		cout<<"El resultado de la division es de: " <<res <<endl;
	}
	return 0;
}

