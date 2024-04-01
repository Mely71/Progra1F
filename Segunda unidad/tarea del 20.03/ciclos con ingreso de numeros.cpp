#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num3;
	
	cout << "Ingrese un numero por favor"<<endl;
	cin >> num3;
	num1 = 0;
	while (num1 <= num3) {
		cout << "EL primer numero es: " << num1 << endl;
		num1++;
	}
	
	cout<<endl;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num3;
	num1=0;
	do{
		cout<<"El segundo numero es: "<< num1 << endl;
		num1++;
	}while (num1 <= num3);
	
	cout<<endl;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>num3;
	for (int num1 = 0; num1 <= num3; num1++){
		cout<<"El tercer numero es: " << num1 << endl;
	}
	return 0;
}

