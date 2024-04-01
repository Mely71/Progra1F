#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num_1, num_2;
	char letra;
	int res;
	
	cout<<"Que es lo que necesitas hace? "<<endl;
	cout<<"a. restar los numeros "<<endl;
	cout<<"b. suamr los numeros "<<endl;
	cin>>letra;
	
	if (letra == 'a') {
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>num_1;
		cin>>num_2;
		
		res = num_1-num_2;
		cout<<"el resultado es: "<<res;
	}
	if (letra == 'b') {
		cout<<"Ingrese dos numeros: "<<endl;
		cin>>num_1;
		cin>>num_2;
		
		res = num_1 + num_2;
		cout<<"el resultado es: "<<res;
	}
	
	return 0;
}

