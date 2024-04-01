#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	int num_5;
	
	cout<<"Ingrese 5 numeros: ";
	cin>>num_1;
	cin>>num_2;
	cin>>num_3;
	cin>>num_4;
	cin>>num_5;
	
	int result_1;
	int result_2;
	int result_tot;
	
	result_1=num_1-num_5;
	cout<<"El resultado de la resta es: "<<result_1 << endl;
	
	result_2=num_2+num_3+num_4;
	cout<<"El resultado de la suma es: "<<result_2 << endl;
		
	result_tot=result_1*result_2;
	cout<<"El resultado total es: "<<result_tot;
	
	return 0;
}

