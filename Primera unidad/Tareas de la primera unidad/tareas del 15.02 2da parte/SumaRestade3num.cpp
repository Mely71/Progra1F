#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num_1;
	int num_2;
	int num_3;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num_1;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>num_2;
	
	cout<<"Ingrese el tercer numero: ";
	cin>>num_3;
	
	int result_1;
	int result_2;
	
	result_1=num_1+num_2;
	cout<<"El resultado de la suma es: "<<result_1;
	
	result_2=result_1-num_3;
	cout<<" El resultado total es: "<<result_2;
	
	
	return 0;
}

