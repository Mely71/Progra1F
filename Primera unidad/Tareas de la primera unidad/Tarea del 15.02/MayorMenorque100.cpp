#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num_1;
	int num_2;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num_1;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>num_2;
	
	int result;
	result=num_1*num_2;
	cout<<"El resultado es: "<<result;
	
	if (result > 100)
	{
		cout<<" El resultado es mayor que 100";
	}
	else
	{
		cout<<" El resultado es menor que 100";
	}
	
	return 0;
}

